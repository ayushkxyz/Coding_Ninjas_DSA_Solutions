#include<climits>
int maximum(BinaryTreeNode<int>* root){
    if(root==NULL){
        return INT_MIN;
    }
    return max(root->data,max(maximum(root->left),maximum(root->right)));
}
int minimum(BinaryTreeNode<int>* root){
    if(root==NULL){
        return INT_MAX;
    }
    return min(root->data,min(minimum(root->left),minimum(root->right)));
}




bool isBST(BinaryTreeNode<int> *root) {
	// Write your code here  
      
    if(root==NULL){
        return true;
    }
    int rightmin=minimum(root->right);
    int leftmax=maximum(root->left);
    
    return isBST(root->left)&&isBST(root->right)&&(leftmax<root->data)&&rightmin>=root->data;
    
}
