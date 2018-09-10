#include <sstream>
#include "book.h"
using namespace std;

int Book::nextId = 1;

Book::Book(const string& title, const string& isbn, const string& author):
    id(nextId++),
    title(title),
    isbn(isbn),
    author(author){}

string Book::str() const{
  stringstream sout;
  sout << "  Id: " << id << endl
       << "  Title: " << title << endl
       << "  ISBN: " << isbn << endl
       << "  Author: " << author;
  return sout.str();
}