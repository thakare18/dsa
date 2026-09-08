class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
// love babbar 450 sheet que
        while(low < high) {
            int mid = low + (high - low) / 2;

            // Agar middle value rightmost value se badi hai,
            // toh minimum element right side mein present hoga.
            if(nums[mid] > nums[high]) {
                low = mid + 1;
            }
            else if(nums[mid] < nums[high]) {
                // Agar middle value rightmost value se chhoti hai,
                // toh minimum element middle ya left side mein ho sakta hai.
                high = mid;
            }
            else {
                // Agar dono values equal hain, toh hum rightmost element ko ignore kar sakte hain.
                high--;
            }
        }

        // Jab low aur high same ho jayenge, tab wahi minimum element ka index hoga.
        return nums[low];
    }
};