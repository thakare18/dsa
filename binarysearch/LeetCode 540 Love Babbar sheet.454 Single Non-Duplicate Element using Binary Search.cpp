class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        int n = nums.size();

        int s = 0;
        int e = n - 1;

        while (s <= e) {

            // only one element left
            if (s == e) {
                return nums[s];
            }

            int mid = s + (e - s) / 2;

            int currentValue = nums[mid];

            int leftValue = -1;
            if (mid - 1 >= 0) {
                leftValue = nums[mid - 1];
            }

            int rightValue = -1;
            if (mid + 1 < n) {
                rightValue = nums[mid + 1];
            }

            // current element is answer
            if (currentValue != leftValue &&
                currentValue != rightValue) {
                return currentValue;
            }

            // current pairs with left
            if (currentValue == leftValue &&
                currentValue != rightValue) {

                int pairStartingIndex = mid - 1;

                if (pairStartingIndex & 1) {
                    // odd index -> answer on left
                    e = mid - 1;
                }
                else {
                    // even index -> answer on right
                    s = mid + 1;
                }
            }

            // current pairs with right
            if (currentValue != leftValue &&
                currentValue == rightValue) {

                int pairStartingIndex = mid;

                if (pairStartingIndex & 1) {
                    // odd index -> answer on left
                    e = mid - 1;
                }
                else {
                    // even index -> answer on right
                    s = mid + 1;
                }
            }
        }

        return -1;
    }
};