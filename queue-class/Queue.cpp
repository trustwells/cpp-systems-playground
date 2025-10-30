#include <iostream>

const int maxQsize = 100;

class Queue {
  char q[maxQsize];
  int size;           // max num of element the queue can store
  int putloc, getloc; // the put and get indices
public:
  Queue(int len) {
    if (len > maxQsize)
      len = maxQsize;
    else if (len <= 0)
      len = 0;

    size = len;
    putloc = getloc = 0;
  }
  void put(char c) {
    if (putloc == size) {
      std::cout << " -- Queue is full.\n";
      return;
    }

    putloc++;
    q[putloc] = c;
  }

  char get() {
    if (getloc == putloc) {
      std::cout << " -- Queue is empty.\n";
      return 0;
    }

    getloc++;
    return q[getloc];
  }
};

int main() {

  Queue bigQ(100);
  Queue smallQ(4);
  char ch;
  int i;

  return 0;
}
