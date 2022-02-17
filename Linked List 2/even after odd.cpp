Node *evenAfterOdd(Node *head)
{
	//write your code here
    Node*e=NULL;
    Node*o=NULL;
    Node*et,*ot,*t;
    Node*temp=head;
    while(temp!=NULL){
        t=temp->next;
        if(temp->data%2==0){
            if(e==NULL){
                e=temp;
                temp->next=NULL;
                et=e;
            }
            else{
                et->next=temp;
                temp->next=NULL;
                et=et->next;
            }
        }
        else{
             if(o==NULL){
                 o=temp;
                 temp->next=NULL;
                 ot=o;
             }
            else{
                ot->next=temp;
                temp->next=NULL;
                ot=ot->next;
            }
        }
        temp=t;
    }
    if(e==NULL){
        return o;
    }
    else if(o==NULL){
        return e;
    }
    else{
    ot->next=e;
    return o;
    }
    
}
