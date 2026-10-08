#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  string songs[11] = {"We Found Love", "Old Town Road", "Somebody That I Used To Know", "Despacito", "Rolling In The Deep", "Without Me", "Call Me Maybe", "Perfect", "Blurred Lines", "I Like It", "Just The Way You Are"};
  int songsReleaseYear[11] = {2011, 2020, 2012, 2017, 2011, 2019, 2012, 2013, 2017, 2018, 2010};

  // start both at the first song, then compare everything else against them
  string new_song = songs[0];
  string old_song = songs[0];
  int new_song_date = songsReleaseYear[0];
  int old_song_date = songsReleaseYear[0];

  for (int i = 1; i < 11; i++) {
    if (songsReleaseYear[i] > new_song_date) {
      new_song_date = songsReleaseYear[i];
      new_song = songs[i];
    }
    if (songsReleaseYear[i] < old_song_date) {
      old_song_date = songsReleaseYear[i];
      old_song = songs[i];
    }
  }

  cout << "Newest Song on the List: " << new_song << endl;
  cout << "Oldest Song on the List: " << old_song << endl;

  // seed so the random pick changes every run
  srand(time(0));
  int rand_num = rand() % 11;
  cout << "Random Song From List: " << songs[rand_num] << " (" << songsReleaseYear[rand_num] << ")" << endl;

  return 0;
}
