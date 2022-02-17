/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

bool isPalindrome(Node *head)
{
    if(head==NULL||head->next==NULL){
        return true;
    }
    //Write your code here
    int n=0;
    Node*temp=head;
    while(temp!=NULL){
        n++;
        temp=temp->next;
    }
    Node*slow=head;
    Node*fast=head->next;
    while(fast!=NULL&&fast->next!=NULL){
          slow=slow->next;
        fast=fast->next->next;
    }
    Node*sec;
    Node*prev=NULL;
    Node*curr,*t;
    if(n%2==0){
        
        sec=slow->next;
        slow->next=NULL;
        curr=sec;
        while(curr!=NULL){
            t=curr->next;
            curr->next=prev;
            prev=curr;
            curr=t;
            
        }
        Node*e=head;
        while(prev!=NULL){
            if(prev->data!=e->data){
                return false;
            }
            e=e->next;
            prev=prev->next;
        }
        return true;
        
    }
    else{
        sec=slow->next;
        curr=sec;
        
        slow->next=NULL;
        while(curr!=NULL){
            t=curr->next;
            curr->next=prev;
            prev=curr;
            curr=t;
            
        }
        Node*e=head;
        while(e->next!=slow){
             if(prev->data!=e->data){
                return false;
            }
            e=e->next;
            prev=prev->next;
        }
        return true;
        }
        
    
    
    
    
}
