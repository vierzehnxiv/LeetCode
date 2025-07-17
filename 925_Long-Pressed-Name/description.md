# LeetCode Problem: Long Pressed Name

## Problem Description
Your friend is typing his `name` into a keyboard. Sometimes, when typing a character `c`, the key might get *long pressed*, and the character will be typed 1 or more times.

You examine the `typed` characters of the keyboard. Return `True` if it is possible that it was your friend's name, with some characters (possibly none) being long pressed.

## Examples

### Example 1
**Input:** name = "alex", typed = "aalleexx"  
**Output:** true  
**Explanation:** 'a' and 'e' in 'alex' were long pressed.

### Example 2
**Input:** name = "saeed", typed = "ssaaedd"  
**Output:** false  
**Explanation:** 'e' must have been pressed twice, but it was not in the typed output.

### Example 3
**Input:** name = "leelee", typed = "lleeelee"  
**Output:** true  
**Explanation:** Each character in 'leelee' can be matched with long presses in 'lleeelee'.

### Example 4
**Input:** name = "laiden", typed = "laiden"  
**Output:** true  
**Explanation:** No characters were long pressed, but the typed string matches the name exactly.

## Constraints
- 1 <= name.length, typed.length <= 1000
- `name` and `typed` consist of only lowercase English letters.