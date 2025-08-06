#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& nums,int low,int mid,int high){
    vector<int> temp;
    int l=low,r=mid+1;
    while(l<=mid && r<=high){
        if(nums[l]<nums[r]){
            temp.push_back(nums[l]);
            l++;
        }
        else{
            temp.push_back(nums[r]);
            r++;
        }
    }
    while(l<=mid){
        temp.push_back(nums[l]);
        l++;
    }
    while(r<=high){
        temp.push_back(nums[r]);
        r++;
    }
    for(int i=low;i<=high;i++){
        nums[i]=temp[i-low];
    }
};
void merge_sort(vector<int>& nums,int low,int high){
    if(low==high) return;
    int mid=(low+high)/2;
    merge_sort(nums,low,mid);
    merge_sort(nums,mid+1,high);
    merge(nums,low,mid,high);
};
void mergeSort(vector<int>& nums){
    int n=nums.size();
    merge_sort(nums,0,n-1);
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
    mergeSort(nums1);
    std::cout << "Sorted:   ";
    printVector(nums1); // Output: 1 3 4 5 7

    std::cout << "--------------------" << std::endl;

    std::vector<int> nums2 = {5, 4, 4, 1, 1};
    std::cout << "Original: ";
    printVector(nums2);
    mergeSort(nums2);
    std::cout << "Sorted:   ";
    printVector(nums2); // Output: 1 1 4 4 5

    return 0;
}