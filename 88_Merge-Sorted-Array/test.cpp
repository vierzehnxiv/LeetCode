#include <vector>
#include <cassert>
#include <iostream>
#include "88_Merge-Sorted-Array.cpp"

using namespace std;

void printVector(const vector<int>& vec) {
    cout << "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        cout << vec[i];
        if (i < vec.size() - 1) cout << ",";
    }
    cout << "]" << endl;
}

void testMergeSortedArray() {
    Solution solution;

    // Testfall 1: Beispiel 1 aus der Problemstellung
    {
        vector<int> nums1 = {1, 2, 3, 0, 0, 0};
        vector<int> nums2 = {2, 5, 6};
        int m = 3, n = 3;
        vector<int> expected = {1, 2, 2, 3, 5, 6};
        solution.merge(nums1, m, nums2, n);
        assert(nums1 == expected);
        cout << "Testfall 1 bestanden: ";
        printVector(nums1);
    }

    // Testfall 2: Beispiel 2 aus der Problemstellung
    {
        vector<int> nums1 = {1};
        vector<int> nums2 = {};
        int m = 1, n = 0;
        vector<int> expected = {1};
        solution.merge(nums1, m, nums2, n);
        assert(nums1 == expected);
        cout << "Testfall 2 bestanden: ";
        printVector(nums1);
    }

    // Testfall 3: Beispiel 3 aus der Problemstellung
    {
        vector<int> nums1 = {0};
        vector<int> nums2 = {1};
        int m = 0, n = 1;
        vector<int> expected = {1};
        solution.merge(nums1, m, nums2, n);
        assert(nums1 == expected);
        cout << "Testfall 3 bestanden: ";
        printVector(nums1);
    }

    // Testfall 4: Beide Arrays leer
    {
        vector<int> nums1 = {};
        vector<int> nums2 = {};
        int m = 0, n = 0;
        vector<int> expected = {};
        solution.merge(nums1, m, nums2, n);
        assert(nums1 == expected);
        cout << "Testfall 4 bestanden: ";
        printVector(nums1);
    }

    // Testfall 5: Größere Arrays mit Duplikaten
    {
        vector<int> nums1 = {1, 3, 5, 7, 9, 0, 0, 0, 0};
        vector<int> nums2 = {2, 4, 6, 8};
        int m = 5, n = 4;
        vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        solution.merge(nums1, m, nums2, n);
        assert(nums1 == expected);
        cout << "Testfall 5 bestanden: ";
        printVector(nums1);
    }

    // Testfall 6: Negative Zahlen
    {
        vector<int> nums1 = {-3, -1, 0, 0, 0};
        vector<int> nums2 = {-2, 1, 2};
        int m = 2, n = 3;
        vector<int> expected = {-3, -2, -1, 1, 2};
        solution.merge(nums1, m, nums2, n);
        assert(nums1 == expected);
        cout << "Testfall 6 bestanden: ";
        printVector(nums1);
    }

    // Testfall 7
    {
        vector<int> nums1 = {2, 0};
        vector<int> nums2 = {1};
        int m = 1, n = 1;
        vector<int> expected = {1, 2};
        solution.merge(nums1, m, nums2, n);
        assert(nums1 == expected);
        cout << "Testfall 7 bestanden: ";
        printVector(nums1);
    }

    cout << "Alle Testfälle bestanden!" << endl;
}

int main() {
    testMergeSortedArray();
    return 0;
}