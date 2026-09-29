#import <iostream>
#import <random>

using namespace std;

int main() {
  string songs[11] = {"We Found Love", “Old Town Road” , “Somebody That I Used
To Know”, “Despacito” , “Rolling In The Deep”, “Without Me” , “Call Me
Maybe”, “Perfect” , “Blurred Lines”, “I Like It” , “Just The Way You Are” };
  int songsReleaseYear[11] = {2011, 2020, 2012, 2017, 2011, 2019, 2012, 2013,
2017, 2018, 2010};

//displays all songs + date released
  for(int i = 0; i < 11; i++){
    cout << "Name of song \t Date Released" << endl;
    cout << songs[i] << "\t" << songsReleaseYear[i] << endl;
  }

  string new_song, old_song, random_song;
  int new_song_date, old_song_date, rand_num;

//oldest song
  for(int i = 0; i < 11; i++){
    if(songsReleaseYear[i] > songsReseaseYear[i-1])
      new_song_date = songsReleaseYear[i];
      new_song = songs[i];
      cout << "Newest Song on the List: " << new_song << endl;
  }

//oldest song
  for(int i = 0; i < 11; i++){
    if(songsReleaseYear[i] < songsReseaseYear[i-1])
      old_song_date = songsReleaseYear[i];
      old_song = songs[i];
      cout << "Oldest Song on the List: " << old_song << endl;
  }

//random song
  rand_num = rand() % 11;
  cout << "Random Song From List: " << songs[rand_num] << endl;;
  return 0;
}
