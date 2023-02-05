#include <string>

int digital_root(int n)
{
  auto storage = std::to_string(n);
  int sum = 0;
  int i = 0;
  for(std::string::iterator it = storage.begin();it != storage.end();++it)
  {
    sum += *it - '0';
    ++i;
  }
  if(i>1){return digital_root(sum);}
  else{return sum;}
  
}
