// 3Sum Problem
// Find all unique triplets such that sum = 0

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        int n = nums.size();
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        for(int i = 0; i < n; i++) {

            if(i > 0 && nums[i] == nums[i - 1]) continue;

            for(int j = i + 1; j < n; j++) {

                if(j > i + 1 && nums[j] == nums[j - 1]) continue;

                for(int k = j + 1; k < n; k++) {

                    if(k > j + 1 && nums[k] == nums[k - 1]) continue;

                    int sum = nums[i] + nums[j] + nums[k];

                    if(sum == 0) {
                        ans.push_back({nums[i], nums[j], nums[k]});
                    }
                }
            }
        }

        return ans;
    }
};

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    Solution obj;
    vector<vector<int>> result = obj.threeSum(nums);

    for(auto triplet : result) {
        cout << "[ ";
        for(int x : triplet) {
            cout << x << " ";
        }
        cout << "] ";
    }

    return 0;
}


//https://drive.google.com/file/d/1fNYvJ_FlJr6E5X8IREKUPfRX1-Vu27pF/view?pli=1 time and space complexity notes 