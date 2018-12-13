//***********************************************************************************
// Sorting a Playlist
// Programmer: Caleb Cox
// Completed : 11/11/2018
// Status    : Complete
//
// This program makes a 10 song playlist and sorts the playlist by the artist name.
//***********************************************************************************

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//Create Playlist structure object
struct Playlist {
    string title, artist;
};

//Function Prototypes
void showPlaylist(const Playlist[], int);
void bubbleSort(Playlist[], int);
string getSong();
string getArtist();

/*********************************************************************
 Main
 *********************************************************************/
int main() {
    const int NUM = 10;
    Playlist playlist[NUM];
    
    cout << "Let's make a playlist sorted by Artists!\n" << endl;
    //CREATE PLAYLIST
    for(int i=0; i<NUM; i++){
        
        cout << "Song #" << i+1 << endl;
        
        //Call getSong to assign to current title
        playlist[i].title = getSong();
        
        
        //Call getArtist to assign to current artist
        playlist[i].artist = getArtist();
        
        cout << endl;
    }
    
    
    //Separate Input from Output
    cout <<"-----------------------------\n" << endl;

    //SORT DATA
    bubbleSort(playlist, NUM);
    
    //DISPLAY DATA
    cout << "\t\tPlaylist\n" << endl;
    cout << "Artist\t\t\tSong"<<endl;
    cout << "============================\n";
    
    showPlaylist(playlist, NUM);
    
    cout << endl;
    
    return 0;
}
/*********************************************************************
 Get Song Title
 **********************************************************************/
string getSong(){
    string title;
    cout << "Title: ";
    getline(cin, title);
    return title;
    
}

/*********************************************************************
 Get Artist Name
 **********************************************************************/
string getArtist(){
    string artist;
    cout << "Artist: ";
    getline(cin, artist);
    return artist;
}


/*********************************************************************
 Show Playlist
 **********************************************************************/
void showPlaylist(const Playlist obj[], int size){
    
    for (int i = 0; i < size; i++){
        cout << setw(15) << left << obj[i].artist
        << setw(15) << left << obj[i].title << endl;
    }
}


/*********************************************************************
 Bubble Sort
 **********************************************************************/
void bubbleSort(Playlist array[], int size){
    Playlist temp;
    bool swap;
    
    do{
        swap=false;
        for(int count = 0; count < (size - 1); count++){
            if(array[count].artist > array[count+1].artist){
                temp = array[count];
                array[count] = array[count+1];
                array[count+1] = temp;
                swap = true;
                
            }
        }
        
    }while (swap);
}




