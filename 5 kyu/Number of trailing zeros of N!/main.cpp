long zeros(long n) {
  // Some basic math, number of zeros is always number of times we can divide n by 5
  int zeros = 0;
    while(n>=5){
        n = n/5;
        zeros += n;
    }
  return zeros;
}
