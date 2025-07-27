import pandas as pd
from pd_2879 import selectFirstRows
 
# Test cases
def test_first_three_rows():

    # Test Case 1: DataFrame with 5 rows
    employees1 = pd.DataFrame({
        'employee_id': [2, 3, 7, 8, 9],
        'name': ['Meir', 'Michael', 'Addilyn', 'Juan', 'Kannon'],
        'salary': [3000, 3800, 7400, 6100, 7700]
    })
    expected1 = pd.DataFrame({
        'employee_id': [2, 3, 7],
        'name': ['Meir', 'Michael', 'Addilyn'],
        'salary': [3000, 3800, 7400]
    })
    result1 = selectFirstRows(employees1)
    pd.testing.assert_frame_equal(result1.reset_index(drop=True), expected1.reset_index(drop=True))

    # Test Case 2: DataFrame with 2 rows
    employees2 = pd.DataFrame({
        'employee_id': [1, 2],
        'name': ['Max', 'John'],
        'salary': [2500, 3000]
    })
    expected2 = employees2.copy()
    result2 = selectFirstRows(employees2)
    pd.testing.assert_frame_equal(result2.reset_index(drop=True), expected2.reset_index(drop=True))

    # Additional Test Case 3: DataFrame with 1 row
    employees3 = pd.DataFrame({
        'employee_id': [1],
        'name': ['Alice'],
        'salary': [5000]
    })
    expected3 = employees3.copy()
    result3 = selectFirstRows(employees3)
    pd.testing.assert_frame_equal(result3.reset_index(drop=True), expected3.reset_index(drop=True))

    print("All tests passed!")

if __name__ == "__main__":
    test_first_three_rows()
