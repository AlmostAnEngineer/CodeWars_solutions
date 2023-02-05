std::vector<int> tribonacci(std::vector<int> signature, int n)
{
    if(n > 3)
    {
    while(signature.size() < n)
    {
      signature.emplace_back(signature.rbegin()[0] + signature.rbegin()[1]+ signature.rbegin()[2]);
    }
    return signature;
    }
    else if(n <= 3)
    {
      std::vector<int>::const_iterator first = signature.begin();
      std::vector<int>::const_iterator last = signature.begin() + n;
      std::vector<int> vec(first, last);
      return vec;
    }
}
