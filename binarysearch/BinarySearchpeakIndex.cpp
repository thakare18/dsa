// Find Peak Index in a Mountain Array
//
// A mountain array is an array where:
// 1. Elements first increase.
// 2. Then elements decrease.
//
// Find the index of the peak element.
//
// Example:
// Input : [0,2,5,3,1]
// Output: 5
//
// Approach:
//
// If arr[mid] < arr[mid+1]
// -> mid is on increasing slope
// -> peak lies on right side
//
// Else
// -> mid may be the peak
// -> or peak lies on left side
// -> store answer  and compute and move left
//
// Time Complexity: O(log n)
// Space Complexity: O(1)

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        int n = arr.size();

        int s = 0;
        int e = n - 1;

        int ansIndex = -1;

        while(s <= e) {

            int mid = (s + e) / 2;

            // If mid is on Line 1 (Increasing Part)
            if(arr[mid] < arr[mid + 1]) {

                // Right
                s = mid + 1;
            }
            else {

                // Mid is on Line 2
                // Line 2 also contains peak element
                // Mid may be peak or left of peak

                // Store answer
                ansIndex = mid;

                // Move Left
                e = mid - 1;
            }
        }

        return ansIndex;
    }
};



class Solution {
    public:  
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size(); // size of array
        int s = 0; // start index
        int e = n - 1; // end index

        int ansIndex = -1; // variable to store the index of peak element

        while(s < = e){


            int mid = (s + 2) /2;

            // if mid on line 1st 
            if(arr[mid] < arr[mid+1] ) {
                // right 
                s= mid + 1;
            }
            else {
                //mid on the line 2 
                // line 2 also contain mid may or may we use store and compute statergies
                // mid on left side 

                // store answer 
                ansIndex = mid ;
                // move left
                e = mid -1;
            }

        }
        return ansIndex;

    }
}