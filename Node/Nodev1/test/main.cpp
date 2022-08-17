#include <iostream>
#include <string>
using namespace std;



string decryptCaesar(string ciphertext, int rshift)
{
    char c = ' ';
    char newChar = ' ';
    string decrypt = "";
    for (int i = 0; i < ciphertext.size(); i++){
        c = ciphertext[i];
        if(islower(c) && (int(c) - rshift < int('a')))
        {
            newChar = char(int(c)-rshift + 26);
        }
        else if(isupper(c) && (int(c) - rshift < int('A')))
        {
            newChar = char(int(c)-rshift + 26);
        }
        else
        {
            newChar = char(int(c)-rshift);
        }

        decrypt = decrypt + newChar;
    }

    return decrypt;

}

string decryptVigenere( string ciphertext, string keyword)
{
    char c = ' ';
    char newChar = ' ';
    string decrypt = " ";
    for (int i = 0; i < ciphertext.size(); i++){
        c = ciphertext[i];
        if(islower(c) && (int(c) - rshift < int('a')))
        {
            newChar = char(int(c)-rshift + 26);
        }
        else if(isupper(c) && (int(c) - rshift < int('A')))
        {
            newChar = char(int(c)-rshift + 26);
        }
        else
        {
            newChar = char(int(c)-rshift);
        }

        decrypt = decrypt + newChar;
    }

    return decrypt;

}

int main()
{
    string ciphertext;
    int rshift;
    string keyword;

    cout << "ciphertext input";
    getline(cin, ciphertext);

    cout << "rshift input";
    cin >> rshift;

    cout << "keyword input";
    cin >> keyword;

    cout << decryptCaesar(ciphertext, rshift);
    //cout << decryptvigenere();

    return 0;
}