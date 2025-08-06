#include <iostream>
#include <vector>

using namespace std;
void selection(vector<int>& nums){
    for(int i=0,n=nums.size();i<n-1;i++){
        int min=i,temp=0;
        for(int j=i+1;j<n;j++){
            if (nums[j]<nums[min]){
                min=j;
            }
        }
        temp=nums[i];
        nums[i]=nums[min];
        nums[min]=temp;
    }
};
void bubble(vector<int>& nums){
    for(int n=nums.size(),i=n-1;i>=0;i--){
        int temp=0;
        for(int j=0;j<i;j++){
            if (nums[j]>nums[j+1]){
                temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            } 
        }
    }      
};
void insertion(vector<int>& nums){
    int n = nums.size();
    for (int i = 1; i < n; i++) {
        int key = nums[i];
        int j = i - 1;
        while (j >= 0 && nums[j] > key) {
            nums[j + 1] = nums[j];
            j = j - 1;
        }
        nums[j + 1] = key;
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
    std::vector<int> nums1 = {7, 4, 1, 5, 3};
    std::cout << "Original: ";
    printVector(nums1);
    selection(nums1);
    std::cout << "Sorted:   ";
    printVector(nums1); // Output: 1 3 4 5 7

    std::cout << "--------------------" << std::endl;

    std::vector<int> nums2 = {5, 4, 4, 1, 1};
    std::cout << "Original: ";
    printVector(nums2);
    bubble(nums2);
    std::cout << "Sorted:   ";
    printVector(nums2); // Output: 1 1 4 4 5

    std::cout << "--------------------" << std::endl;
    std::vector<int> nums3 = {3,2,3,4,5};
    std::cout << "Original: ";
    printVector(nums3);
    insertion(nums3);
    std::cout << "Sorted:   ";
    printVector(nums3); // Output: 2 3 3 4 5

    return 0;
}