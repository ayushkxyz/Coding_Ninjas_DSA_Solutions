#include<climits>
bool helper(BinaryTreeNode<int>*root,int l,int r){
    if(root==NULL){
        return true;
    }
     
    
    bool b1=true;
    bool b2=true;
    if(root->data>=l&&root->data<=r){
         b1=helper(root->left,l,root->data-1);
         b2=helper(root->right,root->data,r);
        
    }
    else {
        return false;
    }
    return b1&&b2;
    
}
bool isBST(BinaryTreeNode<int> *root) {
	// Write your code here
            
    return helper(root,INT_MIN,INT_MAX);
    
    
}
