// Program main
// Author Joe Pitz
// Copyright:  Creative Commmons CC BY SA NC
//
// This code was ported from pythom from the code listed
// on the following web site: http://inventwithpython.com: by Al Sweigart
//
// Description main function for caesar cipher
// encrypts a message based on a 1 of 26 letters in the alphabet
// decrypts a message based on i of 26 letters in the alphabet
// brute force decrypt a message by substituting every letter in the alhabet
//
// Change Summary
// Created Joe Pitz. 11/29/2013

#include <iostream>
#include <string>

#include "caesarCipher.h"

using std::string;

// constants
const int MAX_KEY_SIZE = 26;

int main()
{
    // declare variables
    char mode;
    int key;
    string message;

    caesarCipher cc;
    // get the mode of encryption/decription
    mode = cc.getMode();

    // quit is mode is 'q'
    if (mode == 'q')
        return 0;

    // get the message
    message = cc.getMessage(&message);

    // if not brute force get the key
    if (mode != 'b')
        key = cc.getKey();

    std::cout << "Your translated text is:\n";

    if (mode != 'b')
        std::cout << cc.getTranslatedMessage(mode, &message, key);
    else
        for (int i = 1; i <= MAX_KEY_SIZE; ++i)
            std::cout << i << " " << cc.getTranslatedMessage('d', &message, i) << "\n";

    return 0;
}

