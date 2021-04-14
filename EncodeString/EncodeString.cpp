#include <iostream>
#include <string>
#include "Cipher.h"
#include "Vigenere.h"
#include "Atbash.h"
#include "Caesar.h"
#include "HomeMade.h"

using namespace std;

int main()
{
    string input;
    while (input != "5") {
        cout << "Input desired method:\n1: Caesar\n2: Vigenere\n3: Atbash\n4: Homemade" << endl;
        getline(cin, input);
        int i = stoi(input);
        switch (i) {
        case 1:
            Caesar();
        case 2:
            Vigenere();
        case 3:
            Atbash();
        case 4:
            HomeMade();
        default:
            cout << "Invalid input. Please type again" << endl;
        }
    }
    return 0;
}
