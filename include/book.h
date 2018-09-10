#ifndef LIBRARY_BOOK_H
#define LIBRARY_BOOK_H

#include <sstream>
#include <vector>
#include <string>

class Book {
public:
  Book(const std::string& title, const std::string& isbn, const std::string& author);

  int getId() const { return id; }
  const std::string& getTitle() const { return title; }
  const std::string& getIsbn() const { return isbn; }
  const std::string& getAuthor() const { return author; }

  virtual std::string kind() const = 0;
  virtual std::string str() const;

  virtual ~Book(){}
private:
  static int nextId;

  int id;
  std::string title;
  std::string isbn;
  std::string author;
};

#endif

