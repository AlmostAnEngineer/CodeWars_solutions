#include <vector>
#include <algorithm>

int maxSequence(const std::vector<int>& arr){
  if(arr.size() == 0){return 0;}
  int maxsum = arr[0], current_sum = arr[0];
  for(int it = 1;it < (int)arr.size(); ++it)
  {
    current_sum = std::max(arr[it], current_sum + arr[it]);
    maxsum = std::max(maxsum, current_sum);
  }
  if (maxsum <= 0){return 0;}
  return maxsum;
}
