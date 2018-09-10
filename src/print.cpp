#include "print.h"
using namespace std;

Print::Print(const string& title, const string& isbn, const string& author, int pgs):
    Book(title, isbn, author),
    pages(pgs){}

string Print::str(){
  stringstream sout;
  sout << "Print: " << endl << Book::str() << endl
       << "  Pages: " << pages;
  return sout.str();
}
