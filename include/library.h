#include "table.h"
#include "book.h"
#include "transaction.h"

class Library {
public:
  Library(){}

  Table<Book*>& books(){ return bdata; }
  Table<Patron*>& patrons(){ return pdata; }
  Table<Transaction>& transactions(){ return tdata; }

  void checkout(Book* book, Patron* p){
    tdata.items().push_back(Transaction{ book, p, "checked-out" });
  }

  void checkin(Book* b){
    for(auto it = tdata.items().begin(); it != tdata.items().end(); it++){
      if(it->book->getId() == b->getId()) {
        tdata.items().erase(it);
        break;
      }
    }
  }

private:
  Table<Book*> bdata;
  Table<Patron*> pdata;
  Table<Transaction> tdata;
};
