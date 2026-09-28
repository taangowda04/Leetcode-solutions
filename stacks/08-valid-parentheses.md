## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

I used a stack to match opening and closing brackets. For every
opening bracket, I push its corresponding closing bracket onto the
stack. When a closing bracket is encountered, it must match the
bracket at the top of the stack.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

Tested the solution locally using a valid combination of brackets
and an invalid combination where the brackets are incorrectly nested.