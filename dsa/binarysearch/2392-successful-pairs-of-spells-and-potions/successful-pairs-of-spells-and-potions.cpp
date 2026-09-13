class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());

        int m = potions.size();
        vector<int> answer;

        for(int spell : spells) {
            int low = 0;
            int high = m - 1;
            int index = m;

            while(low <= high) {
                int mid = low + (high - low) / 2;

                if((long long)spell * potions[mid] >= success) {
                    index = mid;
                    high = mid - 1;
                }
                else {
                    low = mid + 1;
                }
            }

            answer.push_back(m - index);
        }

        return answer;
    }
};