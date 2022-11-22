#include "fin.h"
#include <string>
using namespace std;

void Chord::set_chord(string chord_whole) { _chord_whole = chord_whole; }

void Chord::split_chord() {
  size_t pos = _chord_whole.find("b");
  if (pos != string::npos) {
    _chord_root = _chord_whole.substr(0, pos + 1);
    _chord_rest = _chord_whole.substr(pos + 1);
  }
  else {
    size_t pos = _chord_whole.find("#");
    if (pos != string::npos) {
      _chord_root = _chord_whole.substr(0, pos + 1);
    }
    else {
      _chord_root = _chord_whole.substr(0,1);
    }
  }
}

string Chord::get_root() {
  return _chord_root;
}

string Chord::get_rest() {
  return _chord_rest;
}



