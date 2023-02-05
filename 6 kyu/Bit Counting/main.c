#include <stddef.h>

size_t countBits(unsigned value)
{
  int counter = 0;
  while(value != 0)
  {
    if(value%2 == 1){++counter;}  
    value/=2;
  }
	return counter;
}
