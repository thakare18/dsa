class Solution {
public:
    int arrangeCoins(int n) {
        long long low = 1;
        long long high = n;
        long long answer = 0;

        while(low <= high) {
            long long mid = low + (high - low) / 2;

            if(mid * (mid + 1) / 2 <= n) {
                answer = mid;
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return answer;
    }
};