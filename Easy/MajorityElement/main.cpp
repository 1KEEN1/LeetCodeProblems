#include <iostream>
#include <vector>
#include <unordered_map>

int majorityElement(std::vector<int>& nums) {
    std::unordered_map<int, int> maj;
    for (const int& num : nums) {
        maj[num]++;
    }

    for (const std::pair<const int, const int> n : maj) {
        if (n.second > static_cast<int>(nums.size() / 2)) {
            return n.first;
        }
    }

    return -1;
}

int main() {
    std::vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    std::cout << "Majority element: " << majorityElement(nums) << std::endl;

    return 0;
}