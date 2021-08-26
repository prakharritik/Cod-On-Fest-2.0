//https://leetcode.com/problems/merge-two-sorted-lists
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
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
        ListNode * res=NULL,*re=NULL;
        if(!head1)return head2;
        if(!head2)return head1;
    re=res;
    while(head1!=NULL && head2!=NULL ){
        
        if(head1->val>=head2->val){
            if(res==NULL)
            {res=new ListNode(head2->val);re=res;}
            else {
                res->next=new ListNode(head2->val);
                res=res->next;
            }
            head2=head2->next;
            
        }
        else if(head1->val<head2->val){
            if(res==NULL)
            {res=new ListNode(head1->val);re=res;}
            else {
                res->next=new ListNode(head1->val);
                res=res->next;
            }
            head1=head1->next;
            
        }
    }
    if(head1==NULL && head2!=NULL ){
        if(res==NULL)
            {res=head2;}
            else {
                res->next=head2;
            }
    }
    if(head1!=NULL && head2==NULL ){
        if(res==NULL)
            {res=head1;}
            else {
                res->next=head1;
            }
    }
    return re;
    }
};