#ifndef LIBRARY_AUDIO_H
#define LIBRARY_AUDIO_H

#include "book.h"

class Audio : public Book {
public:
  Audio(const std::string& title, const std::string& isbn, const std::string& author, double hours);
  double getHours() const { return hours; }

  std::string kind() const;
  std::string str() const;

private:
  double hours;
};

#endif
