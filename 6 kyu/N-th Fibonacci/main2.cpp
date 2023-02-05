#include <cmath>

int nthFibo(int n) { 
  if(n == 1) return 0;
  else if(n==2) return 1;
  else
  {
    int fibonacci = 0;
    int a1 = 0;
    int a2 = 1;
    for(int i = 2; i< n; ++i)
    {
      fibonacci = a1+a2;
      a1 = a2;
      a2 = fibonacci;
    }
    return fibonacci;
  }
}
