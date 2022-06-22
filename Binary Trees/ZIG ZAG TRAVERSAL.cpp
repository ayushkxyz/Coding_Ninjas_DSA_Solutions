#include<stack>
#include<queue>

void zigZagOrder(BinaryTreeNode<int> *root) {
    // Write your code here
  int level=1;
    queue<BinaryTreeNode<int>*>q1;
     stack<int>s1;
    queue<int>q2;
    q1.push(root);
    q1.push(NULL);
    while(q1.size()!=1){
      
           while(q1.front()!=NULL){
               if(level%2!=0){
                     q2.push(q1.front()->data);
               }
               if(level%2==0){
                   s1.push(q1.front()->data);
               }
                
                     if(q1.front()->left!=NULL){
                         q1.push(q1.front()->left);
                     }
                     if(q1.front()->right!=NULL){
                         q1.push(q1.front()->right);
                     }
               q1.pop();
               
                 }
           q1.pop();
        q1.push(NULL);
         while(!s1.empty()){
             cout<<s1.top()<<" ";
             s1.pop();
         }
        while(!q2.empty()){
            cout<<q2.front()<<" ";
            q2.pop();
        }
        cout<<endl;
        level++;
        
           }
    
       }
    
   
