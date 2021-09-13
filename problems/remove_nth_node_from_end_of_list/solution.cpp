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

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* p = head;
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(n--) fast = fast->next;
        if(fast == NULL){
           ListNode* p = head;
            head = head->next;
            delete p;
            return head;
        }
        
        while(fast ->next){
            fast = fast ->next;
            slow = slow-> next;
        }
        ListNode* temp = slow->next;
        slow->next = slow ->next ->next;
        delete temp;
        return head;
        
        
    }
};