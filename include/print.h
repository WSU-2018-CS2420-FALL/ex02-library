#ifndef LIBRARY_PRINT_H
#define LIBRARY_PRINT_H

#include "book.h"

class Print : public Book {
public:
  Print(const std::string& title, const std::string& isbn, const std::string& author, int pages);

  int getPages() const { return pages; }

  std::string str();

private:
  int pages;
};

#endif
