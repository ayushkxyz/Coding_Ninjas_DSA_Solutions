void printLevelWise(BinaryTreeNode<int> *root) {
	// Write your code here
    if(root==NULL){
        return;
    }
    queue<BinaryTreeNode<int>*>q1;
    q1.push(root);
    while(q1.size()!=0){
         BinaryTreeNode<int>*front=q1.front();
        q1.pop();
          cout<<front->data<<":";
        if(front->left!=NULL){
                 cout<<"L:"<<front->left->data;
            q1.push(front->left);
            
            
    }
        else if(front->left==NULL){
            cout<<"L:-1";
        }
        
      if(front->right!=NULL){
                 cout<<",R:"<<front->right->data;
          q1.push(front->right);
            
    }
        else if(front->right==NULL){
            cout<<",R:-1";
        }  
        cout<<endl;
        
}
}
