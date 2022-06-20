void mirrorBinaryTree(BinaryTreeNode<int>* root) {
    // Write your code here
     if(root==NULL){return;}
    
     swap(root->left,root->right);
    mirrorBinaryTree(root->left);
    mirrorBinaryTree(root->right);
    
}
