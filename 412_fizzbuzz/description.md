# LeetCode Problem: Fizz Buzz

## Problem Description
Given an integer `n`, return a string array `answer` (1-indexed) where:
- `answer[i] = "FizzBuzz"` if `i` is divisible by both 3 and 5.
- `answer[i] = "Fizz"` if `i` is divisible by 3.
- `answer[i] = "Buzz"` if `i` is divisible by 5.
- `answer[i] = i` (as a string) if none of the above conditions are true.

## Examples

### Example 1
**Input:** n = 3  
**Output:** ["1","2","Fizz"]  
**Explanation:**  
- For i=1: Not divisible by 3 or 5 → "1"  
- For i=2: Not divisible by 3 or 5 → "2"  
- For i=3: Divisible by 3 → "Fizz"

### Example 2
**Input:** n = 5  
**Output:** ["1","2","Fizz","4","Buzz"]  
**Explanation:**  
- For i=1: Not divisible by 3 or 5 → "1"  
- For i=2: Not divisible by 3 or 5 → "2"  
- For i=3: Divisible by 3 → "Fizz"  
- For i=4: Not divisible by 3 or 5 → "4"  
- For i=5: Divisible by 5 → "Buzz"

### Example 3
**Input:** n = 15  
**Output:** ["1","2","Fizz","4","Buzz","Fizz","7","8","Fizz","Buzz","11","Fizz","13","14","FizzBuzz"]  
**Explanation:**  
- Divisible by 3 → "Fizz" (e.g., i=3,6,9,12)  
- Divisible by 5 → "Buzz" (e.g., i=5,10)  
- Divisible by both 3 and 5 → "FizzBuzz" (e.g., i=15)  
- Otherwise, the number as a string.

## Constraints
- `1 <= n <= 10^4`