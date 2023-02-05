#include <string>
#include <vector>

template <typename T> 
std::vector<T> uniqueInOrder(const std::vector<T>& iterable)
{
  T buffor = iterable[0];
  std::vector<T> buff;
  buff.reserve(iterable.size());
  buff.emplace_back(iterable[0]);
  for(int it = 1; it < iterable.size(); ++it)
  {
    if(iterable[it] != buffor)
    {
      buff.emplace_back(iterable[it]);
      buffor = iterable[it];
    }
  }
  return buff;
}

std::vector<char> uniqueInOrder(const std::string& iterable)
{
  std::vector<char> order = {};
  if(iterable.size() == 0){return order;}
  char buffor = iterable[0];
  order.reserve(iterable.size());
  order.emplace_back(buffor);
  for(auto &ch:iterable)
  {
    if (ch != buffor){order.emplace_back(ch);}
    buffor = (char)ch;
  }
  return order;
}
