#define ll long long int

class Solution {
  public:
    bool isBinaryPalindrome(long long int N) {   
        ll temp = N;
        ll rev = 0;

        while(temp)
        {
            if(temp & 1)
            {
                rev |= 1;
            }

            temp >>= 1;

            if(temp)
            {
                rev <<= 1;
            }
        }

        return (N == rev);
    }
};

//gfg 3may 2026 POLD question