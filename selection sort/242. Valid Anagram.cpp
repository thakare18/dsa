class Solution {
public:
    bool isAnagram(const string& s, const string& t) {

        int arr[1000] = {0};

        // For string s, increase the count
        for(int i = 0; i < s.length(); i++) {
            char ch = s[i];
            arr[ch]++;
        }

        // For string t, decrease the count
        for(int i = 0; i < t.length(); i++) {
            char ch = t[i];
            arr[ch]--;
        }

        // Check all frequencies
        for(int i = 0; i < 1000; i++) {
            if(arr[i] != 0) {
                return false;
            }
        }

        return true;
    }
};