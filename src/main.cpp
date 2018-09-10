#include <iostream>
#include <iomanip>
#include "library.h"
#include "print.h"
#include "audio.h"
#include "patron.h"
using namespace std;

void printTransactions(Library& lib){
  cout << left << setw(40) <<"BOOK" << setw(15) << "STATUS" << setw(30)  << "BY" << endl;
  for(auto& t : lib.transactions().items()){
    cout << setw(40) << t.book->getTitle()
         << setw(15) << t.status
         << setw(30)  << t.patron->getName() << endl;
  }
  cout << lib.transactions().size() << " transactions found.\n" << endl;
}

int main(){
  Library lib;

  Book *b = new Print("Animal Farm", "987-987-998","George Orwell", 350);
  Audio *a = new Audio("harry potter and the sorcerer's stone", "348-342-546","J. K. Rowling", 16.5);

  Patron p("Jim Carrey");
  lib.books().items().push_back(b);
  lib.books().items().push_back(a);
  lib.patrons().items().push_back(&p);

  cout << b->str() << endl;
  cout << a->str() << endl;

  lib.checkout(b, &p);
  lib.checkout(a, &p);

  printTransactions(lib);
  lib.checkin(b);
  printTransactions(lib);


  return 0;
}