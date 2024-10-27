#include <iostream>
#include <vector>

int singleNumber(std::vector<int>& nums) {
    int result = 0;
    for (const int& num : nums) {
        result ^= num;
    }

    return result;
}

int main() {
    std::vector<int> nums = {2, 2, 1};

    std::cout << "Result: " << singleNumber(nums) << std::endl;

    return 0;
}