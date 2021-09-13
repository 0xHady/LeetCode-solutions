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
    int getSize(ListNode* head){
        int size =1;
        while(head = head -> next) size++;
        return size;
    }
    
    ListNode* middleNode(ListNode* head) {
        int mid = getSize(head)/2;
        while(mid--) head = head -> next;
        return head;
    }
};