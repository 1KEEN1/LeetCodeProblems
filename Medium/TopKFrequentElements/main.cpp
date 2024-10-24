#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <functional>

std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
    std::unordered_map<int, int> freq;
    for (const int& num : nums) {
        freq[num]++;
    }

    std::vector<std::pair<int, int>> freqVec;
    for (const auto& pair : freq) {
        freqVec.push_back({pair.second, pair.first});
    }

    std::sort(freqVec.begin(), freqVec.end(), std::greater<std::pair<int, int>>());

    std::vector<int> out;
    for (int i = 0; i < k; ++i) {
        out.push_back(freqVec[i].second);
    }

    return out;
}

int main() {
    std::vector<int> nums = {1, 1, 1, 2, 2, 3};
    std::vector<int> out = topKFrequent(nums, 2);

    for (const int& num : out) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}