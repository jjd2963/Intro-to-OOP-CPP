// Jose Duran - Complete
// This program allows the user to enter 10 songs and artists and sorts
// them in aplhabetical order.
#include <iostream>
#include <string>
using namespace std;

// Create structure to hold artists and songs.
struct Song{
    string artist;
    string song;
};

// Function paramaters.
Song songData();
void Displaylist();
void bubbleSort(int size);

// Declare playlist as global array so that all functions can access it
// without the need of invalid passing of arrays.
Song Playlist[10];

int main()
{ 
    int size = 10;
    // Loop for storing songs and artists in array.
    for (int i = 0; i < size; i++){
        Playlist[i] = songData();
    }

    // Call to sort function.
    bubbleSort(size);

    cout << "   Artist\tSong" << endl;
    cout << "======================" << endl;

    //Call to display function.
    Displaylist();
    return 0;
}

// Function that stores song and artist data in structure.
Song songData(){
    Song s;

    cout << "Enter the Artist name: ";
    getline(cin, s.artist);
    cout << "Enter the Song name: ";
    getline(cin, s.song);
    
    return s;
}

// Bubble sort function.
void bubbleSort(int size)
{
   int maxElement;
   int index;

   for (maxElement = size - 1; maxElement > 0; maxElement--)
   {
      for (index = 0; index < maxElement; index++)
      {
         if (Playlist[index].artist > Playlist[index + 1].artist)
         {
            // Call to swap function to swap both artists and songs.
            swap(Playlist[index].artist, Playlist[index + 1].artist);
            swap(Playlist[index].song, Playlist[index + 1].song);
         }
      }
   }
}

// Swap function.
void swap(int &a, int &b)
{
   int temp = a;
   a = b;
   b = temp;
}

// Display function.
void Displaylist(){
    int size = 10;
    // Loop to display each indexed artist and song. 
    for (int i = 0; i < size; i++){
        cout << Playlist[i].artist << "\t";
        cout << Playlist[i].song << endl;
    }
}