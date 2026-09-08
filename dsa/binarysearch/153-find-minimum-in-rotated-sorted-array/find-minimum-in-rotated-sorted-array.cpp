class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;

        while(low < high) {
            int mid = low + (high - low) / 2;

            // Agar middle element rightmost element se bada hai
            // toh minimum element right side mein hoga.
            if(nums[mid] > nums[high]) {
                low = mid + 1;
            }
            else {
                // Middle element rightmost element se chhota hai,
                // toh minimum element middle ya left side mein ho sakta hai.
                high = mid;
            }
        }

        // Jab low aur high same ho jayenge, wahi minimum element ka index hoga.
        return nums[low];
    }
};