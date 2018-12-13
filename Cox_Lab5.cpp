//***********************************************************************************
// Water Consumption Program
// Programmer: Caleb Cox
// Completed : 11/04/2018
// Status    : Complete
//
// This program gets and displays water consumption data for a given year between
// 2005 and 2020 for the City of Paris, Texas to track how much water is consumed
// by its citizens on a monthly basis.
//***********************************************************************************


#include <iostream>
#include <iomanip>
#include <string>
using namespace std;



//Create Water class
class Water{
private:
    //Array for water consumption amounts on a monthly basis
    double monthlyUse[12];
    
public:
    //Array containing months
    string monthName[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    
    //Methods
    //Print header
    void printHeader(){
        int year;
        
        cout << "\nEnter the year for water consumption data: ";
        cin >> year;
        
        //Validate year
        while(year < 2005 || year > 2020){
            cout <<"Year must be between 2005 and 2020. Please enter a valid year:\n";
            cin >> year;
        }
        
        cout << "\nNow, enter the water consumption amounts for each month in Centum Cubic Feet (CCF):\n" << endl;
        
        //Call getData method
        getData();
        
        //Header output
        cout <<"\n\n\t\t" << year <<" Water Consumption Report for Paris, Texas" <<"\n"<< endl;
        cout << "Month\t\tConsumption in CCF" << endl;
        cout << "---------------------------------------" << endl;
        
    };
    
    //Get data for each month
    void getData(){
        for(int i=0; i<12; i++){
            cout << setw(9) << left << monthName[i] << "\t";
            cin >> monthlyUse[i];
            
            //Validate amount
            while(monthlyUse[i] < 0){
                cout << "Consumption amounts cannot be negative. Try Again."<< endl;
                cout << setw(9) << left << monthName[i] << "\t";
                cin >> monthlyUse[i];
            }
                
        }
        //Separate data input and data output for readability
        cout << endl;
    }
    
    //Deisplay data for each month
    void displayData(){
        for(int i=0; i<12; i++){
            cout << setw(9) << left << monthName[i] << "\t";
            cout << monthlyUse[i] << endl;
        }
        cout << "---------------------------------------" << endl;
        cout << endl;
    }
    
    //Calculate total water consumption
    void totalAndAvg(){
        //Accumulator
        double sum=0;
        
        for(int i=0; i<12; i++){
            sum += monthlyUse[i];
        }
        //Display total and average
        cout << "The total consumption for the year: " << sum << " CCF"<< endl;
        cout << "The average consumption for the year: " << sum/12 << " CCF"<< endl;

    }
    
    //Lowest Water Usage
    void lowest(){
        int min=0;
        
        //Iterate through monthlyUse array
        for(int i=1; i<12; i++){
            //Find lowest value
            if(monthlyUse[i]<monthlyUse[min])
                min=i;
        }
        cout << "The lowest consumption was in " << monthName[min] << " with " << monthlyUse[min] << " CCF." <<endl;
    }
    
    //Highest Water Usage
    void highest(){
        int max=0;
        
        //Iterate through monthlyUse array
        for(int i=1; i<12; i++){
            //Find highest value
            if(monthlyUse[i]>monthlyUse[max])
                max=i;
        }
        
        cout << "The highest consumption was in " << monthName[max] << " with " << monthlyUse[max] << " CCF." <<endl;
    }
    
};//**********************************************  END OF WATER CLASS  ************************************************



int main() {
    //Create class
    Water water;
    
    //Define control variable for do-while loop
    char again;
    
    //Get data for at least one year with a do-while loop
    
    cout << "City of Paris, Texas Annual Water Consumption Data Collection" << endl;
    
    do{
    //Call print header method
    water.printHeader();
    
    //Call display data method
    water.displayData();
    
    //Call display data method
    water.lowest();
    
    //Call display data method
    water.highest();
    
    //Call display data method
    water.totalAndAvg();
    
    //Does the user want to input data for another year?
        cout << "\nDo you want to enter data for another year? (y/n)\n";
        cin >> again;
    
    //Do again if yes
    }while (tolower(again) == 'y');
    
    //Exit loop if not
    cout << "Thank you. Goodbye!"<<endl;
    
    
    return 0;
}

