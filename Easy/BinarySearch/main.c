#include <stdio.h>
#include <stdlib.h>

int binarySearch(int* nums, int numsSize, int target) {
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
    int numsSize, target;

    scanf("%d", &numsSize);
    scanf("%d", &target);

    int* nums = (int*)malloc(numsSize * sizeof(int));
    for (int i = 0; i < numsSize; i++)
        nums[i] = i;

    int result = binarySearch(nums, numsSize, target);
    (result == -1) ? printf("Element is not present in array.\n")
                    : printf("Element is present in array.\n");

    return 0;
}