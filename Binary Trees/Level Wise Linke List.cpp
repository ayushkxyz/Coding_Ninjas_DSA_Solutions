#include<queue>
vector<Node<int>*> constructLinkedListForEachLevel(BinaryTreeNode<int> *root) {
    // Write your code her
    
  vector<Node<int>*>v1;
    if(root==NULL){
        return v1;
    }
   queue<BinaryTreeNode<int>*>q1;
    q1.push(root);
    q1.push(NULL);
    while(q1.size()!=1){
        Node<int>*head= NULL;       
        Node<int>*temp=head;
        while(q1.front()!=NULL){
            if(head==NULL){
                head=new Node<int>(q1.front()->data);
                temp=head;
            }
            else {
                temp->next=new Node<int>(q1.front()->data);
                temp=temp->next;
            }
            
            if(q1.front()->left!=NULL){
                q1.push(q1.front()->left);
            }
            if(q1.front()->right!=NULL){
                q1.push(q1.front()->right);
            }
            q1.pop();
        }
        q1.push(NULL);
        q1.pop();
        v1.push_back(head);
    }
    
    return v1;
}
