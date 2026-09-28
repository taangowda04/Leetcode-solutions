## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

I used a frequency array of size 26 to count the occurrences of each
lowercase English letter. Characters from the first string increase
the corresponding count, while characters from the second string
decrease it. If all counts become zero, the two strings are anagrams.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

Checked the string lengths first and tested both a valid anagram and
an edge case containing different characters.