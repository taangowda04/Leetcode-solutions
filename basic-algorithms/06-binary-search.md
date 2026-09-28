## Problem: Binary Search (Easy-Medium)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

I used an iterative binary search approach on the sorted array.
The middle element is checked and the search range is reduced to
either the left or right half depending on the target value.

### Complexity

- Time: O(log n)
- Space: O(1)

### Notes

Binary search requires the input array to be sorted. I tested the
solution using a target that exists in the array and a target that
does not exist.