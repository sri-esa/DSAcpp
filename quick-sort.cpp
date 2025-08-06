#include <iostream>
#include <vector>

using namespace std;

int partitionIndex(vector<int>& nums, int low, int high){
    int pivot=nums[low];
    int i=low,j=high;
    while(i<j){
        while(nums[i]<=pivot && i<high){
            i++;
        }
        while(nums[j]>pivot && j>low){
            j--;
        }
        if(i<j){
            swap(nums[i],nums[j]);
        }
    }
    swap(nums[low],nums[j]);
    return j;
};
void quick_sort(vector<int>& nums,int low,int high){
    if(low<high){
        int p=partitionIndex(nums,low,high);
        quick_sort(nums,low,p-1);
        quick_sort(nums,p+1,high);
    }
};
void quickSort(vector<int>& nums){
    int n=nums.size();
    quick_sort(nums,0,n-1);
};

// Example of how to run the code
void printVector(const std::vector<int>& nums) {
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> nums1 = {7, 4, 1, 5, 3};
    std::cout << "Original: ";
    printVector(nums1);
    quickSort(nums1);
    std::cout << "Sorted:   ";
    printVector(nums1); // Output: 1 3 4 5 7

    std::cout << "--------------------" << std::endl;

    std::vector<int> nums2 = {5, 4, 4, 1, 1};
    std::cout << "Original: ";
    printVector(nums2);
    quickSort(nums2);
    std::cout << "Sorted:   ";
    printVector(nums2); // Output: 1 1 4 4 5

    return 0;
}