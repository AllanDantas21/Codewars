#include <stddef.h>

size_t getMaxBits(unsigned value) {
  short countMaxBits = 0;
  while (value) {
    value /= 2;
    countMaxBits++;
  }
  return countMaxBits;
}

size_t countBits(unsigned value)
{
  size_t maxBits = getMaxBits(value);
  size_t bits = 0;
  short  countBits = 0;
  
  while (bits < maxBits){
      if ((value >> bits) & 0x1){
        countBits++;
      }
      bits++;
  }
	return countBits;
}