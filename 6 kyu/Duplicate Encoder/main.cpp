#include <string>
#include <unordered_map>
#include <algorithm>
#include <cctype>

std::string duplicate_encoder(const std::string& word){
  std::unordered_map<char,int> counting;
  std::string words;
  std::string str = word;
  std::transform(str.begin(), str.end(), str.begin(), ::tolower);
  for(auto &character:str)
  {
    ++counting[character];
  }
  for(auto &it:str)
  {
      if(counting[it] > 1){words += ')';}
      else{words += '(';}
  }
  return words;
}
