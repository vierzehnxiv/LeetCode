#include <cassert>
#include <vector>
#include "21_merge-sort-list.cpp"
using namespace std;


// Helper function to create a linked list from a vector
ListNode* createList(const vector<int>& values) {
    ListNode dummy(0);
    ListNode* current = &dummy;
    for (int val : values) {
        current->next = new ListNode(val);
        current = current->next;
    }
    return dummy.next;
}

// Helper function to convert a linked list to a vector for easy comparison
vector<int> listToVector(ListNode* head) {
    vector<int> result;
    while (head) {
        result.push_back(head->val);
        head = head->next;
    }
    return result;
}

// Helper function to free the linked list
void freeList(ListNode* head) {
    while (head) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    Solution solution;

    // Test Case 1: list1 = [1,2,4], list2 = [1,3,4]
    ListNode* list1 = createList({1, 2, 4});
    ListNode* list2 = createList({1, 3, 4});
    ListNode* result1 = solution.mergeTwoLists(list1, list2);
    vector<int> expected1 = {1, 1, 2, 3, 4, 4};
    assert(listToVector(result1) == expected1);
    freeList(result1);

    // Test Case 2: list1 = [], list2 = []
    list1 = createList({});
    list2 = createList({});
    result1 = solution.mergeTwoLists(list1, list2);
    vector<int> expected2 = {};
    assert(listToVector(result1) == expected2);
    freeList(result1);

    // Test Case 3: list1 = [], list2 = [0]
    list1 = createList({});
    list2 = createList({0});
    result1 = solution.mergeTwoLists(list1, list2);
    vector<int> expected3 = {0};
    assert(listToVector(result1) == expected3);
    freeList(result1);

    // Additional Test Case 4: list1 = [1], list2 = []
    list1 = createList({1});
    list2 = createList({});
    result1 = solution.mergeTwoLists(list1, list2);
    vector<int> expected4 = {1};
    assert(listToVector(result1) == expected4);
    freeList(result1);

    // Additional Test Case 5: list1 = [1,3,5], list2 = [2,4,6]
    list1 = createList({1, 3, 5});
    list2 = createList({2, 4, 6});
    result1 = solution.mergeTwoLists(list1, list2);
    vector<int> expected5 = {1, 2, 3, 4, 5, 6};
    assert(listToVector(result1) == expected5);
    freeList(result1);

    return 0;
}