#include <iostream>
#include <vector>
#include <utility> // For std::swap

class Solution {
private:
    void recursiveBubbleSort(std::vector<int>& nums, int n) {
        // Base Case: If the array has one or zero elements, it's already sorted.
        if (n <= 1) {
            return;
        }
        // This pass moves the largest element to the end (index n-1).
        for (int i = 0; i < n - 1; ++i) {
            if (nums[i] > nums[i + 1]) {
                std::swap(nums[i], nums[i + 1]);
            }
        }
        recursiveBubbleSort(nums, n - 1);
    }

public:
    std::vector<int> bubbleSort(std::vector<int>& nums) {
        recursiveBubbleSort(nums, nums.size());
        return nums;
    }
};

// Example of how to run the code
void printVector(const std::vector<int>& nums) {
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    Solution sol;
    
    std::vector<int> nums1 = {7, 4, 1, 5, 3};
    std::cout << "Original: ";
    printVector(nums1);
    sol.bubbleSort(nums1);
    std::cout << "Sorted:   ";
    printVector(nums1); // Output: 1 3 4 5 7

    std::cout << "--------------------" << std::endl;

    std::vector<int> nums2 = {5, 4, 4, 1, 1};
    std::cout << "Original: ";
    printVector(nums2);
    sol.bubbleSort(nums2);
    std::cout << "Sorted:   ";
    printVector(nums2); // Output: 1 1 4 4 5

    return 0;
}