#include <vector>
#include <algorithm>

std::vector<int> move_zeroes(const std::vector<int>& input) {
  std::vector<int> buffor = input;
  std::stable_partition(buffor.begin(), buffor.end(), std::bind2nd(std::not_equal_to<int>(), 0));
  return buffor;
}
