# LeetCode Problem: Display the First Three Rows

## Problem Description
Given a DataFrame `employees`, return the **first three rows** of the DataFrame. If the DataFrame has fewer than three rows, return all rows.

A **DataFrame** is a two-dimensional data structure with rows and columns, similar to a table. You can assume the input DataFrame `employees` is valid and contains at least one row.

## Examples

### Example 1
**Input:** 
```
employees =
| employee_id | name    | salary |
|------------|---------|--------|
| 2          | Meir    | 3000   |
| 3          | Michael | 3800   |
| 7          | Addilyn | 7400   |
| 8          | Juan    | 6100   |
| 9          | Kannon  | 7700   |
```
**Output:**
```
| employee_id | name    | salary |
|------------|---------|--------|
| 2          | Meir    | 3000   |
| 3          | Michael | 3800   |
| 7          | Addilyn | 7400   |
```
**Explanation:** The DataFrame has five rows, so the first three rows are returned.

### Example 2
**Input:**
```
employees =
| employee_id | name  | salary |
|------------|-------|--------|
| 1          | Max   | 2500   |
| 2          | John  | 3000   |
```
**Output:**
```
| employee_id | name  | salary |
|------------|-------|--------|
| 1          | Max   | 2500   |
| 2          | John  | 3000   |
```
**Explanation:** The DataFrame has two rows, so all rows are returned.

## Constraints
- `1 <= employees.length <= 10^3`
- `1 <= employee_id <= 10^5`
- `1 <= name.length <= 20`
- `name` consists of lowercase English letters.
- `0 <= salary <= 10^6`