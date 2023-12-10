#include <iostream>
#include <vector>
#include <set>

bool containsDuplicate(std::vector<int>& nums) {
    std::set<int> myNums(nums.begin(), nums.end());
    return myNums.size() != nums.size();
}

int main() {
    std::vector<int> test = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};

    std::cout << containsDuplicate(test);

    return 0;
}