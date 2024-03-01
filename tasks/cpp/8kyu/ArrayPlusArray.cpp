#include <vector>

int arrayPlusArray(std::vector<int> a, std::vector<int> b) {
  int answ = 0;
  for (int x : a) {
    answ += x;
  }
  for (int x : b) {
    answ += x;
  }
  return answ; // something went wrong
}
