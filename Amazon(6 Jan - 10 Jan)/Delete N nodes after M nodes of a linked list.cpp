Problem Link:-https://practice.geeksforgeeks.org/problems/delete-n-nodes-after-m-nodes-of-a-linked-list/1/#
/*
delete n nodes after m nodes
  The input list will have at least one element  
  Node is defined as 

struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

*/
class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
        //Add code here   
        if(!head){
            return;
        }
        Node* temp=head;
        while(temp){
            int count1=1;
            while(temp and count1<M){
                temp=temp->next;
                count1++;
            }
            
            if(!temp){
                break;
            }
            
            Node* prev=temp;
            temp=temp->next;
            int count2=0;
            
            while(temp and count2<N){
                temp=temp->next;
                count2++;
            }
            prev->next=temp;
        }
    }
};
