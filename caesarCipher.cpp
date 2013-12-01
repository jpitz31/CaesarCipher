// Program CaesarCipher
// Author Joe Pitz
// Description encrypts, decrypts and brute decrypts a messaage
//
// Copyright:  Creative Commmons CC BY SA NC
//
// This code was ported from pythom from the code listed
// on the following web site: http://inventwithpython.com: by Al Sweigart
//
// Change summary
//
// Created 11/29/2013
//

#include <cctype>
#include <iostream>
#include <string>
#include <sstream>

#include <caesarCipher.h>

using std::string;
using std::stringstream;
using std::cout;
using std::cin;

// constants
const int MAX_KEY_SIZE = 26;

int caesarCipher::getMode()
{
    // declare variables
     string input = "";

    char mode  = {0};

     while (true) {
       std::cout << "Please enter e to encrypt, d to decrypt, b to brute force decrypt, q to quit\n";
       std::getline(std::cin, input);

       if (input.length() == 1) {
         mode = tolower(input[0]);
         if (mode == 'e' || mode == 'd' || mode == 'b' || mode == 'q')
            break;
       }

       std::cout << "Invalid character, please try again\n";
     }
     return mode;
}

string caesarCipher::getMessage(string *input)
{
    std::cout << "Please enter you message\n>";
    std::getline(std::cin, *input);

    return *input;
}

int caesarCipher::getKey()
{
    // declare variables
    string input;
    int key = 0;

    while (true)
    {
        cout << "Please enter a valid key (1 - 26): ";
        getline(cin, input);

        // This code converts from string to number safely.
        std::stringstream str(input);
        if (str >> key)
        {
            if (key >= 1 and key <= MAX_KEY_SIZE)
               break;
        }
        std::cout << "Invalid key, please try again\n";
    }
    return key;
}

string caesarCipher::getTranslatedMessage(char mode, string *message, int key)
{
    // declare variables
    int num;
    char ch;
    string translated = "";
    std::string::iterator startPtr;
    std::string::iterator endPtr;

    if (mode == 'd')
        key = -key;

    startPtr = message->begin();
    endPtr = message->end();
    for(std::string::iterator it = startPtr; it != endPtr; ++it)
    {
        // skips non-alpha characters
        if (std::isalpha(*it))
        {
            num = (int)*it;
            num += key;

            // if character is uppercase
            if (std::isupper(*it))
            {
                if (num > (int)'Z')
                    num -= 26;
                else if (num < (int)'A')
                    num += 26;
            }
            // if character is lower case
            else if (islower(*it))
            {
                if (num > (int)'z')
                    num -= 26;
                else if (num < (int)'a')
                    num += 26;
            }
            ch = (char)*it;
            translated += (char)num;
        }
        else
        {
            ch = (char)*it;
            translated += ch;
        }
    }
    return translated;
}
