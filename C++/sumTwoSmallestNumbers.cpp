#include <vector>

long sumTwoSmallestNumbers(std::vector<int> numbers) {
    std::partial_sort(numbers.begin(), numbers.begin() + 2, numbers.end());
    
    long min1 = static_cast<long>(numbers[0]);
    long min2 = static_cast<long>(numbers[1]);
    
    return min1 + min2;
}