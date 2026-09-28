## Problem: Longest Common Prefix (Easy-Medium)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

I used the first string as the reference prefix and compared its
characters with the corresponding characters of the remaining strings.
The prefix is shortened whenever a mismatch is found.

### Complexity

- Time: O(n × m)
- Space: O(1)

### Notes

Tested the solution using strings with a common prefix and an edge
case where there is no common prefix.