
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        if (!list1) return list2;
        if (!list2) return list1;

        ListNode* mergedHead = nullptr;
        if (list1->val < list2->val) {
            mergedHead = list1;
            list1 = list1->next;
        } else {
            mergedHead = list2;
            list2 = list2->next;
        }

        ListNode* current = mergedHead;

        while (list1 && list2) {
            if (list1->val < list2->val) {
                current->next = list1;
                list1 = list1->next;
            } else {
                current->next = list2;
                list2 = list2->next;
            }
            current = current->next;
        }

        if (list1) {
            current->next = list1;
        } else {
            current->next = list2;
        }

        return mergedHead;       
    }

    ListNode* mergeTwoListsRecursive(ListNode* list1, ListNode* list2) {
        if (!list1 || !list2) {
            return list1 ? list1 : list2;
        }

        if (list1->val > list2->val) {
            swap(list1, list2);
        }

        list1->next = mergeTwoLists(list1->next, list2);
        return list1;        
    }
};