#include <vector>

int findOdd(const std::vector<int>& numbers){
  int value = 0;
  for (auto &k: numbers)
  {
    value ^= k;
  }
  return value;
}
