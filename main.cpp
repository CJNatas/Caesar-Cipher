//      Caesar Cipher
//      March 22 2022
//
//


#include <iostream>
#include <string>

using namespace std;            // standard namespace



int main() {

    char charCaesar[100];       // declare array of chars to read each character in loop
    char ch;
    int intCaesar;
    int length;

    cout << "Enter text to caesar cipher: \n";
    cin.getline(charCaesar, 100);
    cout << "Enter key: \n";
    cin >> intCaesar;

    for (int i = 0; charCaesar[i] != '\0'; i++)
    {
        ch = charCaesar[i];
        if (ch >= 'a' && ch <= 'z')
            ch = ch + intCaesar;
        charCaesar[i] = ch;
        ch = charCaesar[i];
        if (ch >= 'A' && ch <= 'Z')
            ch = ch + intCaesar;
        charCaesar[i] = ch;
    }

    cout << "Your encrypted message is: \n" << charCaesar;



}



