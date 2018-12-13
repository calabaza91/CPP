//*************************************************************************************
// Movie Data
// Programmer: Caleb Cox
// Completed : 11/23/2018
// Status    : Complete
//
// This program gets data about a the number of movies a given number of students see
// in a month. It dynamically allocates an array of the size of students surveyed.
// The user inputs the number of movies each student has seen. The number of movies
// watched are then sorted and displayed. The average is calculated and displayed also.
//*************************************************************************************


#include <iostream>
#include <iomanip>
#include <algorithm> //Included to use the Standard Template Library (STL) sort function
using namespace std;


//Function Prototypes
//functions recieve a pointer that points to the dynamically allocated array
void getMovies(double *movies, int);
void display(double *movies, int);
double avg(double *movies, int);


int main() {
    
    //Variable Declarations
    double *movies = nullptr, //Use to dynamically allocate array
            average = 0.0;
    int size;
    
    //Get number of students for movies array
    cout << "Enter number of students surveyed: ";
    cin >> size;
    
    //Validate number of students
    while (size < 0) {
        cout << "\nNumber of sudents cannot be negative. \nPlease enter a valid number:\n";
        cin >> size;
    }
    
    
    //Dynamically allocates an array large enough to hold that many students
    movies = new double[size]; //Allocate memory
    
    getMovies(movies, size); //Get data
    sort(movies, movies + size); //Sort data function from STL
    
    cout << "\nNumber of Movies Watched" << endl;
    cout << "---------------------------" << endl;
    display(movies, size);  //Display data
    
    //Assign returned value to be printed
    average = avg(movies, size);
    
    cout << fixed << showpoint << setprecision(1);
    cout << "---------------------------" << endl;
    cout << "Average movies watched: "<< average << endl;
    cout << endl;
   
    //Free dynamically allocated memory
    delete[] movies;
    movies = nullptr;
    return 0;
}


/*********************************************************************
 Get movie data function
 **********************************************************************/
void getMovies(double *movies , int size){
    
    //Get number of movies watched by each student
    cout << "Enter the number of movies for each student:" << endl;
    for (int count=0; count < size; count++) {
        cin >> *(movies + count);
        
        //Movie input validation
        while (*(movies + count) < 0) {
            cout << "Number of movies cannot be negative. \nPlease enter a valid number: \n";
            cin >> *(movies +count);
        }
    }
}


/*********************************************************************
 Display data function
 **********************************************************************/
void display(double *movies, int size){
    for (int count = 0; count < size; count++){
        cout << *(movies + count) << endl;
    }
}


/*********************************************************************
 Calculate average function
 **********************************************************************/
double avg(double *movies, int size){
    double total =0.0; //Accumulator
    for (int count = 0; count < size; count++){
        total += *(movies + count); //Sums total
    }
    return total/size; //returns average
}

