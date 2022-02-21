void printLevelWise(TreeNode<int>* root) {
    if(root==NULL){
        return ;
    }
    // Write your code here
    queue<TreeNode<int>* >pending;
    pending.push(root);
   
    while(pending.size()!=0){
         TreeNode<int>*temp=pending.front();
         cout<<temp->data<<":";
        int i=0;
        
        int numchild=pending.front()->children.size();
        for(;i<numchild;i++){
            if(i==numchild-1){
            cout<<temp->children[i]->data;
        }
            else{
                cout<<temp->children[i]->data<<",";
            }
        pending.push(temp->children[i]);
    }
        cout<<endl;
        pending.pop();
      
    }
    
}
