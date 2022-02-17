Node *bubbleSort(Node *head)
{
	// Write your code here
    int count=0;
    Node*temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    while(count>1){
        Node*temp=head;
        int i=1;
        while(i<count){
            if(temp->data>temp->next->data){
                int a=temp->next->data;
                temp->next->data=temp->data;
                temp->data=a;
                
            }
            temp=temp->next;
            i++;
        }
        count--;
    }
    return head;
}
