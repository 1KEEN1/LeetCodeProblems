#include <iostream>
#include <vector>
#include <algorithm>

int removeElement(std::vector<int>& nums, int val) {
    nums.erase(std::remove_if(nums.begin(), nums.end(), [val](int x) { return x == val;}), nums.end());
    return nums.size();
}

int main() {
    std::vector<int> nums = {1, 2, 2, 3};    

    std::cout << "Nums in vector: " << removeElement(nums, 2) << std::endl;

    std::cout << "Vector: ";
    for (int num : nums) {
        std::cout << num << " "; 
    }
    std::cout << std::endl;

    return 0;
}