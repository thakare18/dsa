class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low = 0;
        int high = arr.size() - 1;

        while(low <= high) {
            int mid = low + (high - low) / 2;

            // Mid ke left side mein jitne positive numbers missing hain, unko calculate karenge.
            int missing = arr[mid] - (mid + 1);

            // Agar missing numbers k se kam hain, toh humein right side mein search karna hoga.
            if(missing < k) {
                low = mid + 1;
            }
            else {
                // Agar missing numbers k ya usse zyada hain, toh humein left side mein search karna hoga.
                high = mid - 1;
            }
        }

        // Low positions ke baad k-th missing positive number mil jayega.
        return low + k;
    }
};