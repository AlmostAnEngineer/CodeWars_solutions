#include <string>
#include <cmath>

class DigPow
{
public:
  static int digPow(int n, int p)
  {
    std::string num = std::to_string(n);
    int sum = 0;
    int it = p;
    for(auto &ch:num)
    {
      sum += pow((int)ch - 48,it);
      ++it;
    }
    int k = sum % n;
    if(k == 0){return sum / n;}
    return -1;
  }
};
