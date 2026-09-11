class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;

        while(low < high) {
            int mid = low + (high - low) / 2;

            // If mid is odd, we move it to the previous even index
            // so that we can compare the first element of a pair.
            if(mid % 2 == 1) {
                mid--;
            }

            // If the pair is correct, the single element lies on the right side.
            if(nums[mid] == nums[mid + 1]) {
                low = mid + 2;
            }
            else {
                // If the pair is broken, the single element lies on the left side or at mid.
                high = mid;
            }
        }

        // When low and high become equal, that position contains the single element.
        return nums[low];
    }
};