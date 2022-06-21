#include<queue>
void printLevelWise(BinaryTreeNode<int> *root) {
    // Write your code here
    queue<BinaryTreeNode<int>*>q1;
         q1.push(root);
      q1.push(NULL);
    while(q1.size()!=1){
         
          while(q1.front()!=NULL){
                cout<<q1.front()->data<<" ";
                if(q1.front()->left!=NULL){
                    q1.push(q1.front()->left);
                }
              if(q1.front()->right!=NULL){
                  q1.push(q1.front()->right);
              }
              q1.pop();
          }
        cout<<endl;
        q1.pop();
        q1.push(NULL);
        
    }
       
    
