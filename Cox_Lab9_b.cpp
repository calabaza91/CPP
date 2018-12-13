//***************************************************************************************
// File Decryption
// Programmer: Caleb Cox
// Completed : 12/09/2018
// Status    : Complete
//
// This program dencrypts a file to change its secret code into a readable message.
// Two files are opened up. One for reading the secret message, the other to write
// the message in its original state. Each character of the secret message gets read,
// subtracted 10 to its ASCII code and then written to the second file in plain English.
//***************************************************************************************
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    //Define Variables
    char ch;
    fstream filein, fileout;
    string fixed, secret;
    
    //Get encrypted file for reading secret message and open it
    cout << "Enter a file name to encrypt: " << endl;
    getline(cin, secret);
    
    filein.open(secret.c_str(), ios::in); //c_str() turns strings into c-string
    if(filein.fail()){ //Check failbit
        cout << "File could not be opened." << endl;
        filein.clear();
        return 1;
    }
    
    //Get file for writing decrypted message and open it
    cout << "Enter a file name to encrypt: " << endl;
    getline(cin, fixed);
    
    fileout.open(fixed.c_str(), ios::out);
    if(fileout.fail()){ //Check failbit
        cout << "File could not be opened.";
        fileout.clear(); //Clears bad bits
        return 1;
    }

    //Decrypt the secret message
    while(!filein.fail()){
        filein.get(ch);
        fileout.put(ch-10);//Add 10 to ASCII code
    }
    
    
    //Close files
    filein.close();
    fileout.close();
    
    return 0;
}
