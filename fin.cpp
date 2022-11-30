#include "fin.h"
#include <string>
#include <iostream>
using namespace std;

string _sharp_keys[12] = {"A","A#","B","C","C#","D","D#","E","F","F#","G","G#"};
string  _flat_keys[12] = {"A","Bb","B","C","Db","D","Eb","E","F","Gb","G","Ab"};

void Chord::set_chord(string chord_whole) { 
  _chord_whole = chord_whole;
  _scan_pos = 0;
}

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
      _chord_rest = _chord_whole.substr(pos + 1);
    }
    else {
      _chord_root = _chord_whole.substr(0,1);
      _chord_rest = _chord_whole.substr(1);
    }
  }
}

string Chord::get_root() {
  return _chord_root;
}

string Chord::get_rest() {
  return _chord_rest;
}

bool Chord::check_key() {
  for(int i = 0; i < 12; i++) {
    if (_chord_whole.length()==0) {
      cout << "please enter a chord";
    } 
      else if (_chord_root==_sharp_keys[i]) {
        _chord_root = _sharp_keys[i];
        cout << "the root is " << _chord_root << endl;
        _valid_chord = true;
      } 
        else if (_chord_root==_flat_keys[i]) {
          _chord_root = _flat_keys[i];
          cout << "the flat root is " << _chord_root << endl;
          _valid_chord = true;
        } 
  }
  return _valid_chord;
}
