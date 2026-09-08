class Solution {
public:

    int firstPosition(vector<int>& nums, int target) {

        int low = 0;
        int high = nums.size() - 1;
        int ans = -1;

        while(low <= high) {

            // Beech ka index nikal rahe liya
            int mid = low + (high - low) / 2;

            if(nums[mid] == target) {

                // Target mil gaya, abhi isko answer man lihya
                ans = mid;

                // Ho sakta hai target left side mein bhi ho
                // Isliye aur left search karenge
                high = mid - 1;
            }
            else if(nums[mid] < target) {

                // Mid ki value chhoti hai,
                // isliye target right side mein hoga
                low = mid + 1;
            }
            else {

                // Mid ki value badi hai,
                // isliye target left side mein hoga
                high = mid - 1;
            }
        }

        return ans;
    }

    int lastPosition(vector<int>& nums, int target) {

        int low = 0;
        int high = nums.size() - 1;
        int ans = -1;

        while(low <= high) {

            // Beech ka index nikal lia
            int mid = low + (high - low) / 2;

            if(nums[mid] == target) {

                // abhi Target mil gaya, isko answer maan li
                ans = mid;

                // Ho sakta hai target right side mein bhi ho
                // Isliye aur right search karenge
                low = mid + 1;
            }
            else if(nums[mid] < target) {

                // Mid ki value chhoti hai,
                // target right side mein hoga
                low = mid + 1;
            }
            else {

                // Mid ki value badi hai,
                // target left side mein hoga
                high = mid - 1;
            }
        }

        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {

        // Target ki pehli occurrence find ki
        int first = firstPosition(nums, target);

        // ab Target ki last occurrence find ki
        int last = lastPosition(nums, target);

        // Dono positions return 
        return {first, last};
    }
};