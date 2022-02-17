Node *skipMdeleteN(Node *head, int M, int N)
{
	// Write your code here
    if(N==0){
        return head;
    }
    if(M==0||head==NULL){
        return NULL;
    }
    if(M==0&&N==0){
        return head;
    }
   Node*temp=head,*follow=NULL;
    while(temp!=NULL){
        int skip=M;
        while(temp!=NULL&&skip>0){
            follow=temp;
            temp=temp->next;
            skip--;
        }
        int d=N;
        while(temp!=NULL&&d>0){
            follow->next=temp->next;
            Node*del=temp;
            delete(del);
            temp=follow->next;
            d--;
        }
    }
    return head;
}
