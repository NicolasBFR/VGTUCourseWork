#include "ImageBW.h"
#include "ImageColor.h"
#include "string"
#include <SDL.h>

#define t 30
#define s 20


ImageBW::ImageBW(ImageColor *img)
{
    x = img->getX();
    y = img->getY();
    PixelMatrix = new PixelBW(x * y);
    Uint32* intImg = NULL;
    intImg = (Uint32*) malloc(x * y * sizeof(Uint32));
    Uint32 sum;
    //Integral image
    for (Uint16 i = 0; i < x; i++) {
        sum = 0;
        for (Uint16 j = 0; j < y; j++) {
            sum += in[j * x + i];
            if (i == 0) {
                intImg[j * x + i] = sum;
            }
            else {
                intImg[j * x + i] = intImg[j * x + i - 1] + sum;
            }
        }
    }
    //Actual binarization
    for (Uint16 i = 0; i < x; i++) {
        for (Uint16 j = 0; j < y; j++) {
            //Border safeguards
            Uint16 x1 = i - s / 2;
            if (i <= s / 2) {
                x1 = 1;
            }
            Uint16 x2 = i + s / 2;
            if (i + s / 2 >= x) {
                x2 = x - 1;
            }
            Uint16 y1 = j - s / 2;
            if (j <= s / 2) {
                y1 = 1;
            }
            Uint16 y2 = j + s / 2;
            if (j + s / 2 >= y) {
                y2 = y - 1;
            }
            //Binarization
            Uint16 count = (x2 - x1) * (y2 - y1);
            sum = intImg[y2 * x + x2] - intImg[(y1 - 1) * x + x2]
                - intImg[y2 * x + x1 - 1] + intImg[(y1 - 1) * x + x1 - 1];
            if ((in[j * x + i] * count) <= (sum * (100 - t) / 100)) {
                PixelMatrix[j * x + i] = true;
            }
            else {
                PixelMatrix[j * x + i] = false;
            }
        }
    }

}

ImageBW::~ImageBW()
{
    delete[] PixelMatrix;
}

void ImageBW::operator%=(std::string filename)
{
    //Create SDL surface
    SDL_Surface* image = (SDL_Surface*) new char[ x * y * sizeof(Uint32)+sizeof(SDL_Surface)];
    image = SDL_CreateRGBSurface(0, x, y, 32, 0, 0, 0, 0);
    image = SDL_ConvertSurfaceFormat(image, SDL_PIXELFORMAT_ARGB8888, 0);
    Uint32* pixels = (Uint32*)image->pixels;
    //For each pixel
    for (int j = 0; y < image->h; y++)
    {
        for (int i = 0; x < image->w; x++)
        {
            //Save pixel in the SDL surface
            if (PixelMatrix[j * image->w + i].GetWhite()) {
                pixels[j * image->w + i] = (0xFF << 24) | (0xFF << 16) | (0xFF << 8) | 0xFF;
            }
            else {
                pixels[j * image->w + i] = (0xFF << 24) | (0 << 16) | (0 << 8) | 0;
            }
        }
    }
    SDL_SaveBMP(image, filename.c_str());
    SDL_FreeSurface(image);
    SDL_Quit();

}
