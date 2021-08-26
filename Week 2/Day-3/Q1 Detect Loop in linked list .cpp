//https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1
class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        Node *f=head,*s=head,*curr=head;
        while(f!=NULL && f->next!=NULL){
            s=s->next;
            f=f->next->next;
            if(s==f)return true;
        }
        return false;
    }
};