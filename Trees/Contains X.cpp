bool isPresent(TreeNode<int>* root, int x) {
    // Write your code here
   if(root==NULL){
       return false;
   }
    bool ans=false;
    if(root->data==x){
        ans=true;
    }
    for(int i=0;i<root->children.size();i++){
           bool b=isPresent(root->children[i],x);
        ans=ans||b;
    }
    return ans;
}
