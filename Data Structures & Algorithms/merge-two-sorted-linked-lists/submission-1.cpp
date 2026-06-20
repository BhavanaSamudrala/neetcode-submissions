/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1 && !list2) return nullptr;
        if(!list1) return list2;
        if(!list2) return list1;

        ListNode* merged;
       
        if(list1->val <= list2->val){
            merged = new ListNode(list1->val);
            merged->next = mergeTwoLists(list1->next, list2); //new ListNode(mergeTwoLists(list1->next, list2)->val);
        }
        else{
            merged = new ListNode(list2->val);
            merged->next = mergeTwoLists(list1, list2->next); //new ListNode(mergeTwoLists(list1->next, list2)->val);
        }
        
        return merged;
        
    }
};
