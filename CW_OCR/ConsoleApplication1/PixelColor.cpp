#include "PixelColor.h"

PixelColor::PixelColor() {}
PixelColor::PixelColor(Uint32 values = 0)
{
	value = values;
}

Uint32 PixelColor::GetValue()
{
	return Uint32();
}

void PixelColor::toGray()
{
	Uint8 r = value >> 16 & 0xFF;
	Uint8 g = value >> 8 & 0xFF;
	Uint8 b = value & 0xFF;
	value = 0.212671f * r + 0.715160f * g + 0.072169f * b;
}
