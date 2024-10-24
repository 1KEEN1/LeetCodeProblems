#include <iostream>
#include <vector>
#include <algorithm>

void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
    int j = 0;
    for (int i = m; i < m + n; ++i) {
        nums1[i] = nums2[j];
        j++;
    }
    
    std::sort(nums1.begin(), nums1.end());
}

int main() {
    std::vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;

    std::vector<int> nums2 = {2, 5, 6};
    int n = 3;

    merge(nums1, m, nums2, n);

    for (const int& num : nums1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}