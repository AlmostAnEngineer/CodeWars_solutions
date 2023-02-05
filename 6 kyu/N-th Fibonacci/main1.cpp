int nthFibo(int n) { 
  auto [a,b] = std::tuple(0,1);
  while(--n){std::tie(a,b) = std::tuple(b,a+b);}
  return a;
}
