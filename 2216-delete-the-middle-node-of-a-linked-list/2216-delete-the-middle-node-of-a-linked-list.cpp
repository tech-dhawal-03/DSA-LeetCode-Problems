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
    ListNode* deleteMiddle(ListNode* head) {
        if(!head->next) return NULL;

        ListNode* temp = head;
        int n = 0;
        while(temp)
        {
            n++;
            temp = temp->next;
        }


        if(n==2)
        {
            head->next = NULL;
            return head;

        } 

        //for n>=3
        int middle = n/2;

        temp = head;
        int pos = 0;
        while(temp)
        {
            if(pos==middle-1)
            {
                ListNode* del = temp->next;
                temp->next = del->next;
                del->next = NULL;
                delete del;
            }

            pos++;
            temp = temp->next;
        } 
        

        return head;


    
        
    }
};