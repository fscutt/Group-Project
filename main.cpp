#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

#include "fin.h"

int main() {
  cout << "enter a chord :";
  string chord_whole;
  cin >> chord_whole;
  
  Chord chord;
  chord.set_chord(chord_whole);
  chord.split_chord();
  string chord_root = chord.get_root();
  cout << chord_root << endl;
  string chord_rest = chord.get_rest();
  cout << chord_rest << endl;
  return 0;
}