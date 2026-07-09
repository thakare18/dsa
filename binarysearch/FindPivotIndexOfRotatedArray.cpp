// Love Babbar sheet 449. Find the Pivot Index of a Rotated Array

/*
Question:

You are given an array that has been rotated at some pivot
unknown to you beforehand.

The array was initially sorted in increasing order and then
rotated at the pivot.

Your task is to find the pivot index, which is the index of
the highest element in the array (i.e., the last element of
the original sorted array).

Example:

Input:
arr = [4,5,6,7,0,1,2]

Output:
3

Explanation:
Pivot element is 7.
Its index is 3.

Approach:

Apply Binary Search.

1. Calculate mid.
2. If arr[mid] > arr[mid+1], then mid is the pivot.
3. If arr[mid] < arr[s], pivot lies in left half.
4. Otherwise, pivot lies in right half.

Time Complexity : O(log n)
Space Complexity: O(1)
*/

class Solution {
public:
    int findPivotIndex(vector<int>& arr) {

        int n = arr.size();

        int s = 0;
        int e = n - 1;

        while(s <= e) {

            int mid = (s + e) / 2;

            // mid is answer
            if(mid < n - 1 && arr[mid] > arr[mid + 1]) {
                return mid;
            }

            // mid is on line 2
            if(arr[mid] < arr[s]) {

                // move left
                e = mid - 1;
            }
            else {

                // move right
                s = mid + 1;
            }
        }

        // array is not rotated
        return -1;
    }
};