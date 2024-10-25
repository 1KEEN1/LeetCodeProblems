#include <iostream>
#include <vector>
#include <algorithm>

int removeDuplicates(std::vector<int>& nums) {
    auto last = std::unique(nums.begin(), nums.end());
    nums.erase(last, nums.end());

    return nums.size();
}

int main() {
    std::vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int newSize = removeDuplicates(nums);
    
    std::cout << "New size of vector nums: " << newSize << std::endl;
    for (const int& num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}