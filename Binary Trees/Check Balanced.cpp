int height(BinaryTreeNode<int>*root){
    if(root==NULL){
        return 0;
    }
    return 1+max(height(root->left),height(root->right));
}


bool isBalanced(BinaryTreeNode<int> *root) {
	// Write your code here
    if(root==NULL){
        return true;
    }
    int left_h=height(root->left);
    int right_h=height(root->right);
      if(abs(left_h-right_h)>1){
          return false;
      }
    return isBalanced(root->left)&&isBalanced(root->right);
    
}
