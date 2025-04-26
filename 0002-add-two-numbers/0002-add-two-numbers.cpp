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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* a1 = l1;
        ListNode* a2 = l2;
        int carry = 0;
        ListNode* ans = new ListNode(0);
        ListNode* traversal = ans;

        while(a1 || a2)
        {
            int sum = carry;
            if(a1) 
            {
                sum+=a1->val;
                a1 = a1->next;
            }


            if(a2)
            {
                sum+=a2->val;
                a2 = a2->next;

            } 
            carry = sum/10;
            ListNode* addNode = new ListNode(sum%10);
            traversal->next = addNode;
            traversal = addNode;
            
           
        }

        if(carry)
        {
            ListNode* addNode = new ListNode(carry);
            traversal->next = addNode;
            traversal = addNode;
            
        } 

        return ans->next;
        
    }
};