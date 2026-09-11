class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        int low = 0;
        int high = n - 1;

        while(low <= high) {
            int mid = low + (high - low) / 2;

            // We calculate how many papers have at least citations[mid] citations.
            int papers = n - mid;

            if(citations[mid] >= papers) {
                // The current position satisfies the h-index condition,
                // so we will search on the left for a larger possible h-index.
                high = mid - 1;
            }
            else {
                // The current position does not satisfy the h-index condition,
                // so we will search on the right side.
                low = mid + 1;
            }
        }

        // The number of papers from low to the end gives the maximum h-index.
        return n - low;
    }
};