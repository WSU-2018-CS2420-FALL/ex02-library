#ifndef LIBRARY_TABLE_H
#define LIBRARY_TABLE_H

template<typename Item>
class Table {
public:
  Table(){}
  std::vector<Item>& items(){return data; }

  Item at(int i){ return data.at(i); }
  int size() { return data.size(); }

private:
  std::vector<Item> data;
};


#endif
