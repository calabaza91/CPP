//*************************************************************************************
// Word Separator
// Programmer: Caleb Cox
// Completed : 12/02/2018
// Status    : Complete
//
// This program accepts a sentence like this:
//              HelloWorld!
// and convertes it to a sentence like this:
//             Hello world!
//*************************************************************************************


#include <iostream>
#include <string>
#include <cstring>// to use tolower and isupper functions
using namespace std;

int main() {
    
    //Variable declaration
    //const int STRLEN = 50;
    string one, //String object for user input
           two; //String object for separated words
    int i=0, j=0;//Holds indices for strings
    
    //Accept sentence with no spaces and first character of each word is an uppercase letter
    cout << "EnterSillySentenceHere: " << endl;
    cin >> one;
   
    //Convert first letter in sentence one to uppercase and put it in sentence two
    two[j] = toupper(one[i]);
    two.append(1, one[0]);

    
    //Start at second index in str, Add spaces before each uppercase letter except the first character
    for(j=1; j<=one.length(); j++){
        if(isupper(one[j])){ //If char in string one is uppercase,
            two.append(1, ' '); //Append a space to string two
            one[j] = tolower(one[j]); //Convert current char to lowercase
            two.append(1, one[j]); //Append current char to string two
        }else{
            two.append(1,one[j]); //Append current char to string two
        }
    }
    
 
    cout << "-------------------------------------------\n";
    cout << "Adding Spaces... converting to lowercase...\n";
    cout << "-------------------------------------------\n";
    
    //Display Sentence
    cout << two << "\n" <<endl;
    
    return 0;
}


