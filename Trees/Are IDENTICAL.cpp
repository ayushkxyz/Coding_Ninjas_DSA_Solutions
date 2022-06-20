bool areIdentical(TreeNode<int> *root1, TreeNode<int> * root2) {
    // Write your code here
    if(root1==NULL&&root2!=NULL || root2==NULL&&root1!=NULL){
        return false;
    }
    
    bool b=true;
    
    if(root1->children.size()!=root2->children.size()){
          return false;
    }
     if(root1->data!=root2->data){
         return false;
     }
    for(int i=0;i<root2->children.size();i++){
        bool ans= areIdentical(root1->children[i],root2->children[i]);
         b=b&ans;
    }
    return b;

}
