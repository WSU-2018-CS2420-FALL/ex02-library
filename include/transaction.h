#ifndef LIBRARY_TRANSACTION_H
#define LIBRARY_TRANSACTION_H

#include <string>
#include "book.h"
#include "patron.h"

struct Transaction {
  Book* book;
  Patron* patron;
  std::string status;
};

#endif
