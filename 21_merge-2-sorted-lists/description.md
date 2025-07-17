# LeetCode Problem: Merge Two Sorted Lists

## Problem Description
You are given the heads of two sorted linked lists `list1` and `list2`.

Merge the two lists into one **sorted** linked list and return the head of the merged linked list. The merged list should be made by splicing together the nodes of the first two lists.

## Examples

### Example 1
**Input:** list1 = [1,2,4], list2 = [1,3,4]  
**Output:** [1,1,2,3,4,4]  
**Explanation:** The merged list combines the nodes of both lists in sorted order.

### Example 2
**Input:** list1 = [], list2 = []  
**Output:** []  
**Explanation:** Both lists are empty, so the merged list is also empty.

### Example 3
**Input:** list1 = [], list2 = [0]  
**Output:** [0]  
**Explanation:** The second list contains a single node, which becomes the merged list.

## Constraints
- The number of nodes in both lists is in the range `[0, 50]`.
- `-100 <= Node.val <= 100`
- Both `list1` and `list2` are sorted in **non-decreasing** order.