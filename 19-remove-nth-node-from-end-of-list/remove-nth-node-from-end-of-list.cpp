// finally 
// made by Toyshi

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
        ListNode* ptr = head;
        int l = 0;
        while(ptr != nullptr){
            l++;
            ptr = ptr->next;

        }
        if(n==l){
            return head -> next;
        }
        
        ptr = head;
        int m= l-n;
        while(m>1){
            m--;
        
            ptr = ptr->next;
        }
        if(n!=1){
        ptr->next = ptr -> next -> next;
        }
        else{
            ptr-> next = nullptr;
        }
        return head;
        
    }
};