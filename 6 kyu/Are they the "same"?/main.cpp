#include <vector>
#include <algorithm>
#include <cmath>

class Same {
public :
    static bool comp(std::vector<int>a, std::vector<int>b) {
      for(auto &k:a){k = k*k;}
      std::sort(a.begin(),a.end());
      std::sort(b.begin(),b.end());
      return a == b;
    }
  
};
