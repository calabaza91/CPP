//*************************************************************
// Basketball Player Height Program
// Programmer: Caleb Cox
// Completed : 9/27/2018
// Status    : Complete
//
// This program calculates and displays the height of a
// basketball player who is 74 inches tall in feet and inches.
// The basketball player requested to remain anonymous.
//*************************************************************
#include <iostream> // input/output declarations
using namespace std;
int main()
{
    int height;
    int feet;
    int inches;
    
    //Define Anon's height
    height = 74;
    
    //Calculate feet by using integer division
    feet = height / 12;
    
    //Calculate inches by using modulo
    inches = height % feet;
    
    cout << "A " << height << " inch tall basketball player is " << feet << " feet " << inches << " inches tall." << endl;
    cout << "-----------------------------------------------------------" << endl;
    return 0;
}

