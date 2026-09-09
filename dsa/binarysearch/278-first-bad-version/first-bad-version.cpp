class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1;
        int high = n;

        while(low < high) {
            int mid = low + (high - low) / 2;

            // Agar current version bad hai, toh first bad version
            // current version ya uske left side mein ho sakta hai.
            if(isBadVersion(mid)) {
                high = mid;
            }
            else {
                // Agar current version good hai, toh first bad version
                // current version ke right side mein hi hoga.
                low = mid + 1;
            }
        }

        // Jab low aur high same ho jayenge, tab wahi first bad version hoga.
        return low;
    }
};