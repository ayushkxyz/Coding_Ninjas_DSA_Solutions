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

Node *swapNodes(Node *head, int i, int j)
{
	//Write your code here
    if(i==j||head==NULL){
        return head;
    }
    int a=i, b=j;
    
    Node*fp,*fn,*sp,*sn;
   Node*temp=head;
    Node*follow=NULL;
    while(temp!=NULL){
        if(i==0){
           fp=follow;
            fn=temp;
        }
        if(j==0){
            sp=follow;
            sn=temp;
        }
        follow=temp;
        temp=temp->next;
        i--;
        j--;
    }
    
    
    Node*t=fn->next;
    fp->next=sn;
    sp->next=fn;
    fn->next=sn->next;
    
        if(a==b+1||b==a+1){
            sn->next=fn;
        }
    else{
        sn->next=t;
    }
    return head;
   
    
    
    
    
    
}
