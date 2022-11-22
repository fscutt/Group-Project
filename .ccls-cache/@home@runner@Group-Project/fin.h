#ifndef FIN_H
#define FIN_H
#include <string>
using namespace std;

class Chord {
  public:
    Chord();
    Chord(string chord, string root, string mode, string add1);

    void set_chord(string chord);

    string get_root();
    string get_mode();
    string get_add1();
    
  private:
    string _chord;
    string _root;
    string _mode;
    string _add1;
    
};

#endif