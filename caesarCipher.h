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

#ifndef CAESARCIPHER_H
#define CAESARCIPHER_H

#include <string>

using std::string;

class caesarCipher
{
public:
    int getMode();
    int getKey();
    string getMessage(string *message);
    string getTranslatedMessage(char mode, string *message, int key);

private:

};

#endif // CAESARCIPHER_H
