#include <string>

/*
* Quite long code but you can add very long numbers without memory problems 
*/

typedef unsigned int uint;
inline void add_zeros(std::string &str1, std::string &str2)
{
    if(str1.size() > str2.size())
    {
      while(str2.size() != str1.size())
      {
        str2.insert(0,"0");
      }
    }
    else if (str1.size() < str2.size())
    {
      while(str1.size() != str2.size())
      {
        str1.insert(0,"0");
      }
    }
}

inline void adding(std::string &str1,std::string &str2,std::string &result)
{
    int buffor = 0;
    for(int i = str1.size() - 1;i >= 0; --i)
    {
        int res = str1[i] + str2[i] + buffor - '0' - '0';
        buffor = 0;
        if(res >= 10){
            ++buffor; 
            res -= 10;
            result.insert(0, std::to_string(res));
        }else{
        result.insert(0, std::to_string(res));}
    }
    result.erase(1,result.size() - str1.size());
    if(buffor == 1)
    {
        result.insert(0, std::to_string(buffor));
    }
}

std::string sum_strings(const std::string& a, const std::string& b) 
{
  std::string buffstr_a = a,buffstr_b = b;
  std::string result;
  if(a.size() != b.size()){add_zeros(buffstr_a,buffstr_b);}
    adding(buffstr_a,buffstr_b,result);
    return result;
}
