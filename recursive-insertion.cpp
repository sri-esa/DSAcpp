#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <unordered_map>

using namespace std;

class Solution {
public:
    std::vector<int>& insertionSort(std::vector<int>& nums) {
        if (nums.size() <= 1) {
            return nums;
        }
        int key = nums.back();

        nums.pop_back();

        insertionSort(nums);

        int i = nums.size() - 1;
        while (i >= 0 && nums[i] > key) {
            i--; 
        }
        nums.insert(nums.begin() + i + 1, key);
        
        return nums;
    }
};
// Helper function to print the elements of a vector
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
    sol.insertionSort(nums1);
    std::cout << "Sorted:   ";
    printVector(nums1); // Output: 1 3 4 5 7

    std::cout << "--------------------" << std::endl;

    std::vector<int> nums2 = {5, 4, 4, 1, 1};
    std::cout << "Original: ";
    printVector(nums2);
    sol.insertionSort(nums2);
    std::cout << "Sorted:   ";
    printVector(nums2); // Output: 1 1 4 4 5
    
    return 0;
}