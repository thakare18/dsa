// 440. Rotate an Array
// Rotate array to the right by k steps

/*
Approach (Step-by-step):

Example:
nums = [1,2,3,4,5,6,7], k = 3

Step 1: Store last k elements in temp
temp = [5,6,7]

Step 2: Shift remaining elements to right
[1,2,3,4] → becomes → [1,2,3,4] shifted right

Step 3: Place temp elements at beginning
Final = [5,6,7,1,2,3,4]

Important:
k = k % n (to handle cases where k > n)

Time Complexity: O(n)
Space Complexity: O(k)
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n = nums.size();
        k = k % n;

        vector<int> temp;

        // Step 1: store last k elements
        for(int i = n - k; i <= n - 1; i++) {
            temp.push_back(nums[i]);
        }

        // Step 2: shift elements to right
        for(int i = n - 1; i >= 0; i--) {
            if(i - k >= 0) {
                nums[i] = nums[i - k];
            }
        }

        // Step 3: copy temp to front
        for(int i = 0; i < k; i++) {
            nums[i] = temp[i];
        }
    }
};

int main() {
    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;

    Solution obj;
    obj.rotate(nums, k);

    for(int x : nums) {
        cout << x << " ";
    }

    return 0;
}