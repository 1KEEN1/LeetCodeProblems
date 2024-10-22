#include <iostream>
#include <vector>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); ++i) {
        for (int j = 0; j < nums.size(); ++j) {
            if (nums[j] == target - nums[i]) {
                return {i, j};
            }
        }
    }
    
    return {};
}

int main() {
    std::vector<int> nums = {2, 7, 11, 15};
    std::vector<int> newNums = twoSum(nums, 9);
    
    std::cout << "Vector: ";
    for (int num : newNums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}