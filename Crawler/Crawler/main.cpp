#include <iostream>
//#include "curl/curl.h"
//#include <libxml/HTMLparser.h>
//#include <libxml/xpath.h>
//#include <libxml/uri.h>
#include "Keyworde.h"
#include <string>

using namespace std;
int main(int argc, char* argv[])
{
    /*
    CURL* req = curl_easy_init();
    CURLcode res;
    if (req)
    {
        curl_easy_setopt(req, CURLOPT_URL, "www.google.com");
        cout << "wow1" << endl;
        curl_easy_setopt(req, CURLOPT_FOLLOWLOCATION, 1L);
        cout << "wow2" << endl;
        res = curl_easy_perform(req);
        cout << "wow3" << endl;
        if (res != CURLE_OK)
        {
            fprintf(stderr, "curl_easy_operation() failed : %s\n", curl_easy_strerror(res));
        }
    }
    curl_easy_cleanup(req);
    return 0;
    */
    Keyworde a = Keyworde();
    string ee = "wouf";
    string ff = "woel";
    string gg = "zrtp";
    a + &ee;
    a + &ff;
    a + &gg;
    a.printkey();
    return 0;

}