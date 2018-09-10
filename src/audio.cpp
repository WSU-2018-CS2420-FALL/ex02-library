#include "audio.h"
using namespace std;

Audio::Audio(const string& title, const string& isbn, const string& author, double hrs):
    Book(title, isbn, author), hours(hrs){}

string Audio::str() const{
  stringstream sout;
  sout << "Audio: " << endl << Book::str() << endl
       << "  Hours: " << hours;
  return sout.str();
}

string Audio::kind() const { return "audio"; }

