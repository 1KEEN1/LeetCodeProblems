#include <iostream>
#include <vector>

int binarySearch(std::vector<int> &nums, int numsSize, int target) {
    int low = 0, high = numsSize - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target)
            return mid;

        if (nums[mid] < target)
            low = mid + 1;

        if (nums[mid] > target)
            high = mid - 1;
    }

    return -1;
}

int main() {
    int numSize, target;

    std::cin >> numSize;
    std::cin >> target;

    std::vector<int> nums(numSize);
    for (int i = 0; i < numSize; i++)
        nums[i] = i;

    int result = binarySearch(nums, numSize, target);
    (result == -1) ? std::cout << "Element is not present in vector.\n"
                    : std::cout << "Element is present in vector.\n";

    return 0;
}