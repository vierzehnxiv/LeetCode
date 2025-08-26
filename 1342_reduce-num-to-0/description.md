# LeetCode Problem: Number of Steps to Reduce a Number to Zero

## Problem Description
Given an integer `num`, return the number of steps required to reduce it to zero. In one step, you must do one of the following:
- If the current number is even, divide it by 2.
- If the current number is odd, subtract 1 from it.

## Examples

### Example 1
**Input:** num = 14  
**Output:** 6  
**Explanation:**  
- Step 1: 14 is even; divide by 2 → 7  
- Step 2: 7 is odd; subtract 1 → 6  
- Step 3: 6 is even; divide by 2 → 3  
- Step 4: 3 is odd; subtract 1 → 2  
- Step 5: 2 is even; divide by 2 → 1  
- Step 6: 1 is odd; subtract 1 → 0  
Total: 6 steps.

### Example 2
**Input:** num = 8  
**Output:** 4  
**Explanation:**  
- Step 1: 8 is even; divide by 2 → 4  
- Step 2: 4 is even; divide by 2 → 2  
- Step 3: 2 is even; divide by 2 → 1  
- Step 4: 1 is odd; subtract 1 → 0  
Total: 4 steps.

### Example 3
**Input:** num = 123  
**Output:** 12  
**Explanation:**  
Follow the steps to reduce 123 to 0:
- 123 is odd → subtract 1 → 122  
- 122 is even → divide by 2 → 61  
- 61 is odd → subtract 1 → 60  
- 60 is even → divide by 2 → 30  
- 30 is even → divide by 2 → 15  
- 15 is odd → subtract 1 → 14  
- 14 is even → divide by 2 → 7  
- 7 is odd → subtract 1 → 6  
- 6 is even → divide by 2 → 3  
- 3 is odd → subtract 1 → 2  
- 2 is even → divide by 2 → 1  
- 1 is odd → subtract 1 → 0  
Total: 12 steps.

## Constraints
- `0 <= num <= 10^6`