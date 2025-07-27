# LeetCode Problem: Running Sum of 1D Array

## Problem Description
Given an array `nums`, return an array `answer` such that `answer[i]` is equal to the sum of all the elements of `nums` from index `0` to index `i` (inclusive).

The running sum at index `i` is defined as `answer[i] = nums[0] + nums[1] + ... + nums[i]`.

You can assume that the input array `nums` is non-empty and contains integers.

## Examples

### Example 1
**Input:** nums = [1,2,3,4]  
**Output:** [1,3,6,10]  
**Explanation:**  
Running sum is obtained as follows:  
- answer[0] = 1  
- answer[1] = 1 + 2 = 3  
- answer[2] = 1 + 2 + 3 = 6  
- answer[3] = 1 + 2 + 3 + 4 = 10  

### Example 2
**Input:** nums = [1,1,1,1,1]  
**Output:** [1,2,3,4,5]  
**Explanation:**  
Running sum is obtained as follows:  
- answer[0] = 1  
- answer[1] = 1 + 1 = 2  
- answer[2] = 1 + 1 + 1 = 3  
- answer[3] = 1 + 1 + 1 + 1 = 4  
- answer[4] = 1 + 1 + 1 + 1 + 1 = 5  

### Example 3
**Input:** nums = [3,1,2,10,1]  
**Output:** [3,4,6,16,17]  
**Explanation:**  
Running sum is obtained as follows:  
- answer[0] = 3  
- answer[1] = 3 + 1 = 4  
- answer[2] = 3 + 1 + 2 = 6  
- answer[3] = 3 + 1 + 2 + 10 = 16  
- answer[4] = 3 + 1 + 2 + 10 + 1 = 17  

## Constraints
- `1 <= nums.length <= 1000`
- `-10^6 <= nums[i] <= 10^6`