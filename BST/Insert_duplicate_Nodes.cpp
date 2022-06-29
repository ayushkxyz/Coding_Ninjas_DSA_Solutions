
void insertDuplicateNode(BinaryTreeNode<int> *root) {
    // Write your code here
    if(root==NULL){
        return ;
    }
     
     insertDuplicateNode(root->left);
        
      BinaryTreeNode<int>*p=new BinaryTreeNode<int>(root->data);
       p->left=root->left;
 
      root->left=p;
      
     insertDuplicateNode(root->right); 
    
    
}
