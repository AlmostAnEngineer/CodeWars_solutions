#include <map>
#include <string>

std::map<char, unsigned> count(const std::string& string) {
    // Check all characters in string
  std::map<char, unsigned> storage = {};
  for(auto &a:string)
  {
    ++storage[a];
  }
    return storage;
}
