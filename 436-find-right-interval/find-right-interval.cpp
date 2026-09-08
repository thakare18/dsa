class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        int n = intervals.size();

        // Hum har interval ki start value aur uska original index store karenge.
        vector<pair<int, int>> starts;

        for(int i = 0; i < n; i++) {
            starts.push_back({intervals[i][0], i});
        }

        // Hum saare intervals ko unki start value ke according sort karenge.
        sort(starts.begin(), starts.end());

        vector<int> answer(n, -1);

        for(int i = 0; i < n; i++) {
            int target = intervals[i][1];

            int low = 0;
            int high = n - 1;
            int index = -1;

            // Hum current interval ke end value se greater than ya equal
            // start value wala sabse pehla interval find karenge.
            while(low <= high) {
                int mid = low + (high - low) / 2;

                if(starts[mid].first >= target) {
                    // Humein ek valid interval mil gaya hai, isliye uska original index store karenge.
                    index = starts[mid].second;

                    // Hum left side mein search karenge taaki aur chhoti valid start value mil sake.
                    high = mid - 1;
                }
                else {
                    // Current start value required end value se chhoti hai,
                    // isliye hum right side mein search karenge.
                    low = mid + 1;
                }
            }

            // Hum found interval ka original index answer mein store karenge.
            answer[i] = index;
        }

        return answer;
    }
};