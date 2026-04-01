// 228. Shift Array Elements by One Position
// Shift all elements to right by 1 (last element comes to front)

// // 228. Shift Array Elements by One Position
// Right shift (same code as image)

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     vector<int> shiftRight(const vector<int>& arr) {

//         int n = arr.size();
//         vector<int> arr2 = arr;

//         int lastElement = arr2[n - 1];

//         for(int i = n - 1; i >= 0; i--) {

//             if(i != 0) {
//                 arr2[i] = arr2[i - 1];
//             }
//             else {
//                 arr2[0] = lastElement;
//             }
//         }

//         return arr2;
//     }
// };

#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public: 
    vector<int> shiftRight(const vector<int>& arr) {
        int n = arr.size();
        vector<int> arr2 = arr;

        int lastElement = arr2[n-1];

        for (int i = n-1 ; i>=0; i--){
            if(i!=0){
                arr2[i]=arr2[i-1];
            }
            else{
                arr2[0]=lastElement;
            }
        }
        return arr2;


    }

}
;
int main() {
    vector<int> arr = {10, 20, 30, 40};

    Solution obj;
    vector<int> result = obj.shiftRight(arr);

    for(int x : result) {
        cout << x << " ";
    }

    return 0;
}