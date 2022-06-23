#include<climits>
pair<int, int> getMinAndMax(BinaryTreeNode<int> *root) {
	// Write your code here
    if(root==NULL){
        pair<int,int>p;
        p.first=INT_MAX;
        p.second=INT_MIN;
        return p;
    }
  pair<int,int>left_=getMinAndMax(root->left);
    pair<int,int>right_=getMinAndMax(root->right);
    pair<int,int>pp;
    pp.first=min(root->data,min(left_.first,right_.first));
    pp.second=max(root->data,max(left_.second,right_.second));
    return pp;
    
}
