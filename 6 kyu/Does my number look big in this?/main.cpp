#include <vector>
#include <cmath>
#include <iostream>

inline bool check(unsigned int &number)
{
    unsigned int temp = 0;
    std::string ch_num = std::to_string(number);
    for (unsigned int i = 0; i < ch_num.size(); ++i)
    {
        temp += std::pow((int)ch_num[i] - 48,i+1);
    }
    return temp == number;
}

std::vector<unsigned int> sumDigPow(unsigned int a, unsigned int b) 
{
  std::vector<unsigned int> result;
  if(a <= b)
  {
      if (a == b)
      {
        if(check(a)){result.push_back(a);}
      }
    else
      {
          for (unsigned int i = a; i < b; ++i)
          {
              if(check(i)){result.push_back(i);}
          }
      }    
}
  return result;
}
