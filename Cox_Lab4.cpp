//***********************************************************************************
// Population Program
// Programmer: Caleb Cox
// Completed : 10/28/2018
// Status    : Complete
//
// This program gets population data from the user and displays birth and death rates.
//***********************************************************************************

#include <iostream>
#include <iomanip>
using namespace std;

//Population Class declaration
class Population
{
    private:
    //Population Attributes
        double currentPop,
            numOfBirths,
            numOfDeaths;
    public:
    //Population Methods
    //Default Constructor initializes Population attributes
        Population(){
            currentPop = 2;
            numOfBirths = 0;
            numOfDeaths = 0;
        }
    
    //Constructor w/ 3 parameters handles population, births and deaths
        Population(double pop, double numBirth, double numDeath){
            currentPop = pop;
            numOfBirths = numBirth;
            numOfDeaths = numDeath;
        }
    //Set Population Mutator
        void setPop(double pop){
            currentPop = pop;
        }
    
    //Set Birth Mutator
        void setBirth(double numBirth){
            numOfBirths = numBirth;
        }
    
    //Set Death Mutatot
        void setDeath(double numDeath){
            numOfDeaths = numDeath;
        }
    
    //Get Birth rate Accessor function
        double getBirthrate(){
            return numOfBirths / currentPop;
        }
    
    //Get Death rate Accessor funciton
        double getDeathrate(){
            return numOfDeaths / currentPop;
        }
    //Get Population (works with default constructor)
        double getPop(){
            return currentPop;
        }
};

//Main Function
int main() {
    //Declare default Population object
    Population pop;

    double currentPop, numOfDeaths, numOfBirths;
    
    // Get Population, births and deaths
    cout << "Enter total population: ";
    cin >> currentPop;
    cout << "Enter annual number of births: ";
    cin >> numOfBirths;
    cout << "Enter annual number of deaths: ";
    cin >> numOfDeaths;
    
    //If current pop is less than 2, use default constructor
    if(currentPop < 2 || numOfDeaths < 0 || numOfBirths < 0){
        //set values back to default values if invalid
        Population pop;
    }
    else
    {
    //Use overlaoded Population constructor
    //Call member functions to set population, births and deaths
        pop.setPop(currentPop);
        pop.setDeath(numOfDeaths);
        pop.setBirth(numOfBirths);
    }
    
    //Call member functions to get pop info to display
    cout << "\nPopulation Statistics\n\n";
    cout << "\tPopulation: " << right << setw(10) << pop.getPop() << endl;
    cout << "\tBirth Rate: " << right << setw(10) << pop.getBirthrate() << endl;
    cout << "\tDeath Rate: " << right << setw(10) << pop.getDeathrate() << endl;
    cout << endl;

    
    return 0;
}
