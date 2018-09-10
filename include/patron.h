#ifndef LIBRARY_PATRON_H
#define LIBRARY_PATRON_H

class Patron {
public:
  Patron(std::string name): name(name){}

  const std::string& getName() const { return name; }

private:
  std::string name;
};

#endif
