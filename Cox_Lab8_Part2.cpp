//*************************************************************************************
// Case Manipulator
// Programmer: Caleb Cox
// Completed : 12/02/2018
// Status    : Complete
//
// This program takes a sentence and passes it through 3 functions:
//      1. Upper - converts lowercase chars to upper
//      2. Lower - converts uppercase chars to lower
//      3. Flip - flips the casings of each letter (i.e upper to lower, lower to upper)
// Each version of the sentence is displayed.
//*************************************************************************************

#include <iostream>
#include <cstring> //to use isupper, toupper, islower, tolower and putchar functions
using namespace std;

//Function prototypes
void upper(char *);
void lower(char *);
void flip(char *);

int main() {
    
    const int STRLEN = 50;
    char *string = nullptr;
    
    //Allocate array
    string = new char[STRLEN];
    
    //accept one string from the user to pass to each of the functions
    cout << "Enter a string to convert:" << endl;
    cin.getline(string, STRLEN);
    cout << "-----------------------------------------\n";
    //Display the original string, the uppercase, lowercase, and flipped case strings
    cout << "OG string: " << string << endl;
    
    cout << "Uppercase: ";
    upper(string);
    cout << endl;
    
    cout << "Lowercase: ";
    lower(string);
    cout << endl;

    cout << "Flipped  : ";
    flip(string);
    cout << "\n" << endl;

    
    //Release memory
    delete[] string;
    
    return 0;
}

//Upper Function
    //accept a C-string as an argument.
void upper(char* str){
    //step through all the characters in the string, converting each to uppercase.
    for(int i=0; i< strlen(str); i++){
        char c= str[i]; //Set current position to char variable to be manipulated
        if(islower(c)){ //Returns true if lowercase
            c = toupper(c); //change char to uppercase
        }
        putchar(c); //write character to standard output
    }
};


//Lower Function
    //accept a C-string as an argument.
void lower(char* str){
    //step through all the characters in the string converting, each to lowercase.
    for (int i = 0; i<strlen(str); i++) {
        char c= str[i]; //Set current position to char variable to be manipulated
        if (isupper(c)) { //Returns true if lowercase
           c = tolower(c); //change char to uppercase
        }
        putchar(c); //write character to standard output
    }
};
//Flip Function
    //accept a C-string as an argument.
void flip(char* str){
    //steps through the string, testing each character to determine whether it is upper or lowercase.
    for (int i=0; i<strlen(str); i++) {
        char c= str[i]; //Set current position to char variable to be manipulated
        if (isupper(c)) { //Returns true if lowercase
            c = tolower(c); //change char to uppercase
        }
        else{
            c = toupper(c); //change char to uppercase
        }
        putchar(c); //write character to standard output
    }
    
};




