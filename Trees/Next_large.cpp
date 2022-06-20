#include<limits.h>
TreeNode<int>*get(TreeNode<int>*root,int x,int &diff){
    TreeNode<int>*ans=NULL;
         if((root->data>x)&& (root->data-x)<diff){
             diff=root->data-x;
             ans=root;
         }
    for(int i=0;i<root->children.size();i++){
            TreeNode<int>*s=get(root->children[i],x,diff);
        if(s!=NULL){
            ans=s;
        }
        
    }
    return ans;
}


TreeNode<int>* getNextLargerElement(TreeNode<int>* root, int x) {
    // Write your code here
    if(root==NULL){
        return NULL;
    }
    int r=INT_MAX;
        return get(root,x,r);
     
    
}
