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

/*Counting Frequencies of Array Elements

Easy

Hints
Given an array nums of size n which may contain duplicate elements, return a list of pairs where each pair contains a unique element from the array and its frequency in the array.

You may return the result in any order, but each element must appear exactly once in the output.
Examples:
Input: nums = [1, 2, 2, 1, 3]
Output: [[1, 2], [2, 2], [3, 1]]
Explanation:
- 1 appears 2 times
- 2 appears 2 times
- 3 appears 1 time
Order of output can vary.

Input: nums = [5, 5, 5, 5]
Output: [[5, 4]]
Explanation:
- 5 appears 4 times.

Constraints:
1 <= nums.length <= 105
-109 <= nums[i] <= 109
*/

class Solution {
public:
    vector<vector<int>> countFrequencies(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int val:nums){
            mpp[val]++;
        }
        vector<vector<int>> res;
        for(const auto& pair:mpp){
            res.push_back({pair.first,pair.second});
        }
        return res;
    }
};
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements separated by spaces: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    Solution sol;
    vector<vector<int>> frequencies = sol.countFrequencies(nums);

    cout << "\nFrequencies" << endl;
    for (const auto& pair : frequencies) {
        cout << "[" << pair[0] << "," << pair[1] << "]" << endl;
    }

    return 0;
}