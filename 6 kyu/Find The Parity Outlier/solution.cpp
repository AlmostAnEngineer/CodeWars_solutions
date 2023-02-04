#include <vector>

bool even_or_odd(std::vector<int> &arr){
  int odd = 0,even = 0;
  std::vector<int>::iterator it;
  for(it = arr.begin(); it != arr.begin() + 3; ++it){
    if(*it%2 == 0){
      ++even;
    }else{
      ++odd;
    }
  }
  if(even > 1){
    return false;
  }else{
    return true;
  }
}

int FindOutlier(std::vector<int> arr)
{
  for(auto &k:arr){
    if(even_or_odd(arr)){
      if(k % 2 == 0) return k;
    }else{
      if(k % 2 == 1 || k % 2 == -1) return k;
    }
    }
}