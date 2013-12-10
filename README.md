CaesarCipher
============

C++ application

Caesar Cipher written in C++

Code was ported from Python, taken from the http://inventwithpython.com web site.

Code was developed in Qt 5.1.1.

Application is a command line application.

User is prompted to enter either a e for encrypt, a e for decrypt, b for brute force or a q to quit.

If "e" encrypt, is choosen. the user is prompted to enter a message to encrypt and an encryption key, a number from 1 - 26

The application then generates an encrypted message using the encryption key

If "d" decrypt is choosen, the user is prompted to enter an encrypted message and an encryption key, a number from 1 - 26.

The application then decryptes the message using the encryption key.

If "b" is entered, the application prompts the user to enter an encrypted message and then attempts to decrypt the message using each of the encryption keys, from 1 - 26.

The application prints out each of the decryption attempts.

The user can then choose which message the decrypted message, if any.

In cryptography, a Caesar cipher, also known as Caesar's cipher, the shift cipher, Caesar's code or Caesar shift, is one of the simplest and most widely known encryption techniques.

http://en.wikipedia.org/wiki/Caesar_cipher
