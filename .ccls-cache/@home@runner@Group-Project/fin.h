#ifndef FIN_H
#define FIN_H
#include <string>
using namespace std;

class Chord {
public:
  void set_chord(string chord_whole);
  void split_chord();

  string get_root();
  string get_rest();
  bool check_key();
  bool check_minor();
private:
  string _chord_whole;
  string _chord_first;
  string _chord_root;
  string _chord_rest;
  bool _valid_chord;
  char _poss_minor;
  int _scan_pos;
};

#endif