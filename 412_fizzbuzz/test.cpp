#include <cassert>
#include <iostream>
#include "412_fizzbuzz.cpp"

using std::cout;
using std::endl;

int main() {
    Solution solution;

    // Test Case 1: n = 3
    vector<string> expected1 = {"1", "2", "Fizz"};
    assert(solution.fizzBuzz(3) == expected1);

    // Test Case 2: n = 5
    vector<string> expected2 = {"1", "2", "Fizz", "4", "Buzz"};
    assert(solution.fizzBuzz(5) == expected2);

    // Test Case 3: n = 15
    vector<string> expected3 = {
        "1", "2", "Fizz", "4", "Buzz",
        "Fizz", "7", "8", "Fizz", "Buzz",
        "11", "Fizz", "13", "14", "FizzBuzz"
    };
    assert(solution.fizzBuzz(15) == expected3);

    // Additional Test Case 4: n = 1
    vector<string> expected4 = {"1"};
    assert(solution.fizzBuzz(1) == expected4);

    // Additional Test Case 5: n = 10
    vector<string> expected5 = {
        "1", "2", "Fizz", "4", "Buzz",
        "Fizz", "7", "8", "Fizz", "Buzz"
    };
    assert(solution.fizzBuzz(10) == expected5);

    cout << "All test cases passed!" << endl;

    return 0;
}
