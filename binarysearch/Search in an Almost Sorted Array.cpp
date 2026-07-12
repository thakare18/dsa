// Love Babbar 452. Find an Element in a Nearly Sorted Array
// GFG: Search in an Almost Sorted Array

/*
Question:

Given a nearly sorted array arr[] and a target K.

In a nearly sorted array, every element may be present at:
1. index i
2. index i - 1
3. index i + 1

Return the index of K if present,
otherwise return -1.

Example:

Input:
arr = [3,5,10,9,11]
K = 10

Output:
2

Explanation:
10 is present at index 2.

--------------------------------------------------------

Approach (Binary Search)

Since every element can move only one position,
target can be present at:

1. mid
2. mid - 1
3. mid + 1

Steps:

1. Find mid.
2. Check arr[mid].
3. Check arr[mid-1].
4. Check arr[mid+1].
5. If target > arr[mid]
      move right by two positions
      s = mid + 2

6. Else
      move left by two positions
      e = mid - 2

Why +2 and -2 ?

Because we have already checked
mid,
mid-1,
mid+1

No need to check them again.

Time Complexity : O(log n)

Space Complexity : O(1)

*/

int findElementInNearlySortedArray(const vector<int>& arr, int K) {

    int n = arr.size();

    int s = 0;
    int e = n - 1;

    while(s <= e) {

        int mid = s + (e - s) / 2;

        // check mid
        if(arr[mid] == K)
            return mid;

        // check mid - 1
        if(mid - 1 >= s && arr[mid - 1] == K)
            return mid - 1;

        // check mid + 1
        if(mid + 1 <= e && arr[mid + 1] == K)
            return mid + 1;

        // move right
        if(K > arr[mid]) {
            s = mid + 2;
        }
        else {
            // move left
            e = mid - 2;
        }
    }

    return -1;
}