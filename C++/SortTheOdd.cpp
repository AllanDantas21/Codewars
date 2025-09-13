#include <vector>
#include <algorithm>

class Kata {
public:
    static bool isOdd(int num) {
        return num % 2 != 0;
    }

    static void swap(std::vector<int>& arr, std::size_t i, std::size_t j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    static std::vector<int> sortArray(const std::vector<int>& array) {
        std::vector<int> result = array;
        std::vector<int> oddNumbers;
        
        for (const int& num : result) {
            if (isOdd(num)) {
                oddNumbers.push_back(num);
            }
        }
        
        std::sort(oddNumbers.begin(), oddNumbers.end());
        
        std::size_t oddIndex = 0;
        for (std::size_t i = 0; i < result.size(); i++) {
            if (isOdd(result[i])) {
                result[i] = oddNumbers[oddIndex];
                oddIndex++;
            }
        }
        
        return result;
    }
};