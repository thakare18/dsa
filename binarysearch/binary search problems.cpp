// # Binary Search Problems

// ## 1. First Occurrence in Sorted Array

// ### Problem Statement

// Given a sorted array and a target element, find the index of the first occurrence of the target element. If the target is not present, return `-1`.

// ### Approach

// * Use Binary Search.
// * Whenever `arr[mid] == target`, store `mid` as a possible answer and continue searching on the left side (`e = mid - 1`) to find an earlier occurrence.
// * If `target < arr[mid]`, move left.
// * Otherwise, move right.

// ### Time Complexity

// `O(log n)`

// ### Space Complexity

// `O(1)`

// ---

// ## 2. Last Occurrence in Sorted Array

// ### Problem Statement

// Given a sorted array and a target element, find the index of the last occurrence of the target element. If the target is not present, return `-1`.

// ### Approach

// * Use Binary Search.
// * Whenever `arr[mid] == target`, store `mid` as a possible answer and continue searching on the right side (`s = mid + 1`) to find a later occurrence.
// * If `target < arr[mid]`, move left.
// * Otherwise, move right.

// ### Time Complexity

// `O(log n)`

// ### Space Complexity

// `O(1)`

// ---

// ## 3. Find First and Last Position of Element in Sorted Array (LeetCode 34)

// ### Problem Statement

// Given a sorted array `nums` and a target value, return the starting and ending position of the target value.

// If the target is not found, return `[-1, -1]`.

// ### Approach

// * Perform Binary Search twice:

//   1. Find the first occurrence.
//   2. Find the last occurrence.
// * Return both indices.

// ### Time Complexity

// `O(log n)`

// ### Space Complexity

// `O(1)`

// ### Concepts Used

// * Binary Search
// * Lower Bound
// * Upper Bound
