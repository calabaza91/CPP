//*************************************************************************************
// File Encryption
// Programmer: Caleb Cox
// Completed : 12/09/2018
// Status    : Complete
//
// This program encrypts a file to change its message into a secret code.
// Two files are opened up. One for reading the original message, the other to write
// the message in a secret code. Each character of the message gets read, added 10 to
// its ASCII code and then written to the second file in gobbledigook.
//*************************************************************************************

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    //Define Variables
    char ch;
    fstream filein, fileout;
    string normal, secret;

    cout << "Enter a file name to encrypt: " << endl;
    getline(cin, normal);
    
    //Get file for reading message and open it
    filein.open(normal.c_str(), ios::in); //c_str() turns strings into c-string
        if(filein.fail()){ //Check failbit
            cout << "File could not be opened." << endl;
            filein.clear(); //Clears bad bits
            return 1;
        }
    
    
    //Get file for encrypting and open it
    cout << "Enter a file name to encrypt: " << endl;
    getline(cin, secret);
    
    fileout.open(secret.c_str(), ios::out);
    if(fileout.fail()){ //Check failbit
        cout << "File could not be opened.";
        fileout.clear(); //Clears bad bits
        return 1;
    }

    //Encrypt the message
    while(!filein.fail()){ //Check failbit
        filein.get(ch);
        fileout.put(ch + 10);//Add 10 to ASCII code
        
    }

    //Close files
    filein.close();
    fileout.close();
    return 0;
}

