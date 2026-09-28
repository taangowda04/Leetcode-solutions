## Problem: Move Zeroes (Easy-Medium)

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach

I used a position pointer to place all non-zero elements at the
beginning of the array while preserving their relative order.
After placing the non-zero elements, the remaining positions are
filled with zeroes.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

Tested the solution using an array containing multiple zeroes and
an edge case where all elements are zero.