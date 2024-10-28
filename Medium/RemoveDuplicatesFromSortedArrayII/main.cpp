#include <iostream>
#include <vector>

int removeDuplicates(std::vector<int>& nums) {
    if (nums.empty()) return 0;
    int i = 0;
    int count = 1;

    for (std::size_t j = 1; j < nums.size(); ++j) {
        if (nums[j] == nums[i]) {
            if (count < 2) {
                nums[++i] = nums[j];
                count++;
            }
        } else {
            nums[++i] = nums[j];
            count = 1;
        }
    }

    return i + 1;
}

int main() {
    std::vector<int> nums = {0, 0, 1, 1, 1, 2, 3, 3};
    int newLength = removeDuplicates(nums);

    std::cout << "New length of the vector: " << newLength << std::endl;
    for (const int& num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}