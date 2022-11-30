#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

#include "fin.h"

int main() {
  bool valid_key = false;
  bool chord_minor = false;
  do {
    cout << "enter a chord : ";
    string chord_whole;
    cin >> chord_whole;
    Chord chord;
    chord.set_chord(chord_whole);
    chord.split_chord();
    string chord_root = chord.get_root();
    string chord_rest = chord.get_rest();
    chord_minor = chord.check_minor();
    valid_key = chord.check_key();
  } while (valid_key==false);
  if (chord_minor==true) {cout << "minor";}
  else {cout << "major";}
  return 0;
}