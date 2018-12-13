//*************************************************************************************
// Winning Division
// Programmer: Caleb Cox
// Completed : 10/21/2018
// Status    : Completed
//
// This program gets the sales figures for four divisions of a company then determines
// which division had the highest sales and displays the result.
//*************************************************************************************
#include <iostream>
#include <iomanip>
using namespace std;

//Function Prototypes
double getSales(string);
void findHighest(double, double, double, double);


int main(){
    
    //Declare variable for each division
    double northEast, southEast, northWest, southWest;
    
    //Call getSales method for each division
    northEast = getSales("NorthEast");
    southEast = getSales("SouthEast");
    northWest = getSales("Northwest");
    southWest = getSales("SouthWest");
    
    
    //Create a space between the sales inputted and the final result
    cout << endl;
    
    //Call findHighest to determine and display division with highest sales
    findHighest(northEast, southEast, northWest, southWest);
    
    return 0;
}



//*************************************************************************************
//Define getSales function
//*************************************************************************************
double getSales(string divisionName){
    
    //Declare local variable for sales
    double sales;
    
    //Validation loop for sales
    while (true){
        
        //Get sales figure from user
        cout << "Enter the quarterly sales for the " << divisionName << " division: ";
        cin >> sales;
        
        //Use if statement to exit loop if sales>-1
        if (sales > -1)
            break;
        
        //If sales < 0, then request valid answer
        cout << "Sales figures cannot be negative. Please re-enter." << endl;
    }
    
    return sales;
}


//*************************************************************************************
//Define findHighest function
//*************************************************************************************
void findHighest(double northE, double southE, double northW, double southW){

    //Use if statements to compare all divisions' sales to each other
    //Then display division with highest sales along with its sales figure
    if(northE > southE && northE > northW && northE > southW)
        cout << "The Northeast division had the highest sales this quarter.\nTheir sales were: $" << fixed << showpoint << setprecision(2)<< northE <<endl;
    
    else if(southE > northE && southE > northW && southE > southW)
        cout << "The Southeast division had the highest sales this quarter.\nTheir sales were: $" << fixed << showpoint << setprecision(2)<< southE <<endl;
    
    else if(northW > northE && northW > southE && northW > southW)
        cout << "The Northwest division had the highest sales this quarter.\nTheir sales were: $" << fixed << showpoint << setprecision(2)<< northW <<endl;
    
    else if(southW > northE && southW > southE && southW > northW)
        cout << "The Southwest division had the highest sales this quarter.\nTheir sales were: $" << fixed << showpoint << setprecision(2)<< southW <<endl;
}













