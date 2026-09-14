class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        sort(envelopes.begin(), envelopes.end(), [](vector<int>& a, vector<int>& b) {
            if(a[0] == b[0])
                return a[1] > b[1];
            return a[0] < b[0];
        });

        vector<int> temp;

        for(auto &env : envelopes) {
            int height = env[1];

            int low = 0;
            int high = temp.size();

            while(low < high) {
                int mid = low + (high - low) / 2;

                if(temp[mid] < height)
                    low = mid + 1;
                else
                    high = mid;
            }

            if(low == temp.size())
                temp.push_back(height);
            else
                temp[low] = height;
        }

       return  temp.size();
    }
};