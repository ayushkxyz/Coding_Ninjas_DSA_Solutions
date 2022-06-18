
int getHeight(TreeNode<int>* root) {
    // Write your code here
    if(root==NULL){
        return 0;
    }
    int height=0;
 
  for(int i=0;i<root->children.size();i++){
      int a=getHeight(root->children[i]);
        height=max(height,a);
  }
    return height+1;
}
