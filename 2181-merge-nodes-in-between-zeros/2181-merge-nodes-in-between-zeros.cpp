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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* dummy=new ListNode(0);
        ListNode* temp=dummy;
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        head=head->next;
        int sum=0;
        while(head!=NULL)
        {
            if(head->val==0)
            {
                ListNode* newnode=new ListNode(sum);
                temp->next=newnode;
                temp=newnode;
                sum=0;
            }
            else{
                sum+=head->val;
            }

            head=head->next;
        }
        temp->next=NULL;

        return dummy->next;
    }
};