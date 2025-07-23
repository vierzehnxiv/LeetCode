# LeetCode Problem: Number of Substrings Containing All Three Characters

## Problem Description
Given a string `s` consisting only of characters `a`, `b`, and `c`, return the number of substrings containing **at least one occurrence** of all three characters (`a`, `b`, and `c`).

A **substring** is a contiguous sequence of characters within the string.

## Examples

### Example 1
**Input:** s = "abcabc"  
**Output:** 10  
**Explanation:** The substrings containing at least one occurrence of `a`, `b`, and `c` are "abc", "abca", "abcab", "abcabc", "bca", "bcab", "bcabc", "cab", "cabc", and "abc" (the last one starts at index 3). Thus, the total is 10.

### Example 2
**Input:** s = "aaacb"  
**Output:** 3  
**Explanation:** The substrings containing at least one occurrence of `a`, `b`, and `c` are "aaacb", "aacb", and "acb". Thus, the total is 3.

### Example 3
**Input:** s = "abc"  
**Output:** 1  
**Explanation:** The substring containing at least one occurrence of `a`, `b`, and `c` is "abc" itself. Thus, the total is 1.

## Constraints
- `3 <= s.length <= 5 * 10^4`
- `s` consists only of characters `a`, `b`, or `c`.