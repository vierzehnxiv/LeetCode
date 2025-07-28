#include <cassert>
#include <iostream>
#include "1672_richest-customer.cpp"

int main() {
    Solution solution;

    // Test Case 1: accounts = [[1,2,3],[3,2,1]]
    vector<vector<int>> accounts1 = {{1, 2, 3}, {3, 2, 1}};
    assert(solution.maximumWealth(accounts1) == 6);

    // Test Case 2: accounts = [[1,5],[7,3],[3,5]]
    vector<vector<int>> accounts2 = {{1, 5}, {7, 3}, {3, 5}};
    assert(solution.maximumWealth(accounts2) == 10);

    // Test Case 3: accounts = [[2,8,7],[7,1,3],[1,9,5]]
    vector<vector<int>> accounts3 = {{2, 8, 7}, {7, 1, 3}, {1, 9, 5}};
    assert(solution.maximumWealth(accounts3) == 17);

    // Additional Test Case 4: Single customer, single bank
    vector<vector<int>> accounts4 = {{10}};
    assert(solution.maximumWealth(accounts4) == 10);

    // Additional Test Case 5: Multiple customers, one bank
    vector<vector<int>> accounts5 = {{5}, {2}, {8}};
    assert(solution.maximumWealth(accounts5) == 8);

    std::cout << "All test cases passed!" << std::endl;

    return 0;
}
