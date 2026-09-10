class Solution {
public:
    int mySqrt(int x) {
        if(x < 2) {
            return x;
        }

        long long low = 1;
        long long high = x;
        long long answer = 0;

        while(low <= high) {
            long long mid = low + (high - low) / 2;

            // Agar mid ka square x ke equal hai, toh humein exact square root mil gaya hai.
            if(mid * mid == x) {
                return mid;
            }
            // Agar mid ka square x se chhota hai, toh hum right side mein search karenge.
            else if(mid * mid < x) {
                answer = mid;
                low = mid + 1;
            }
            // Agar mid ka square x se bada hai, toh hum left side mein search karenge.
            else {
                high = mid - 1;
            }
        }

        // Yahan answer x ka floor square root store karta hai.
        return answer;
    }
};