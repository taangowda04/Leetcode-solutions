## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

I used a single-pass approach while keeping track of the minimum
price seen so far. For each price, I calculate the possible profit
and update the maximum profit whenever a larger profit is found.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

Tested the solution locally using a normal case where a profit is
possible and an edge case where prices continuously decrease.