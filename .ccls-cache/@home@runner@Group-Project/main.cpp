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
  string root = chord.get_root();

  cout << "the root is " << root << endl;
}