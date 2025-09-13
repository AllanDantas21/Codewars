bool matchNbrs(int n1, int n2, int target){
    return (n1+n2==target);
  }
  
  std::pair<std::size_t, std::size_t> two_sum(const std::vector<int>& numbers, int target) {
      size_t n = 0;
      
      while (n < numbers.size()) {
          size_t x = n + 1;
          while (x < numbers.size()) {
              if (matchNbrs(numbers[n], numbers[x], target)) {
                  return std::pair<std::size_t, std::size_t>{n, x};
              }
              x++;
          }
          n++;
      }
      return {0, 0};
  }