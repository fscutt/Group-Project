#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

#include "fin.h"

//(A,A#,B,C,C#,D,D#,E,F,F#,G,G#)
//(Ab,A,Bb,B,C,Db,D,Eb,E,F,Gb,G)

//(C,G,D,A,E,B,F#,C#)
//(C,F,Bb,Eb,Ab,Db,Gb,Cb)

string sharp_array[12] = {"A","A#","B","C","C#","D","D#","E","F","F#","G","G#"};
string flat_array[12] =  {"Ab","A","Bb","B","C","Db","D","Eb","E","F","Gb","G"};
string sharp_keys[8] = {"C","G","D","A","E","B","F#","C#"};
string flat_keys[8] = {"C","F","Bb","Eb","Ab","Db","Gb","G"};
string chord;
string root;
int valid_chord;
void get_chord();
void old();
void root_split();

int main() {
  get_chord();
}
  
void get_chord() {
  string chord;
  bool valid_chord = false;
  do {
    std::cout << "enter a chord : ";
    std::cin >> chord;
    
  } while (valid_chord == false);
}

void root_split() {}

void old() {
  for(int i = 0; i < 8; i++) {
      if (chord==sharp_keys[i]) {
        root = sharp_keys[i];
        cout << "the root is " << root << endl;
        valid_chord = true;
      } else if (chord==flat_keys[i]) {
        root = flat_keys[i];
        cout << "the minor root is " << root << endl;
        valid_chord = true;
}