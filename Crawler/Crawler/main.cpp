#include <iostream>
#include "curl/curl.h"
//#include <libxml/HTMLparser.h>
//#include <libxml/xpath.h>
//#include <libxml/uri.h>
#include "Keyworde.h"
#include <string>
#include <locale> 
#include <codecvt>
#include <fstream>


using namespace std;

static size_t cb(void* contents, size_t size, size_t nmemb, void* userp)
{
    ((std::string*)userp)->append((char*)contents, size * nmemb);
    return size * nmemb;
}


int main(int argc, char* argv[])
{
    CURL* req = curl_easy_init();
    CURLcode res;
    string wow;
    if (req)
    {
        curl_easy_setopt(req, CURLOPT_URL, "https://lahorde.samizdat.net");
        //curl_easy_setopt(req, CURLOPT_FOLLOWLOCATION, 1L);
        curl_easy_setopt(req, CURLOPT_WRITEFUNCTION, cb);
        curl_easy_setopt(req, CURLOPT_WRITEDATA,&wow);
        res = curl_easy_perform(req);
        if (res != CURLE_OK)
        {
            fprintf(stderr, "curl_easy_operation() failed : %s\n", curl_easy_strerror(res));
        }
    }
    curl_easy_cleanup(req);
    wstring wwow = wstring_convert<codecvt_utf8<wchar_t>>().from_bytes(wow);
    //cout << wow << endl << wow.size();

    wofstream fout("example.txt"); 
    locale loc(locale::classic(), new codecvt_utf8<wchar_t>);
    fout << wwow << endl;
    //wcout << wwow << endl << wwow.size();
    return 0;
    //*/
    /*
    Keyworde a = Keyworde();
    string ee = "wouf";
    string ff = "woel";
    string gg = "zrtp";
    a + &ee;
    a + &ff;
    a + &gg;
    a.printkey();
    return 0; //*/

}