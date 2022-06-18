
TreeNode<int>* maxDataNode(TreeNode<int>* root) {
    // Write your code here
    if(root==NULL){
        return NULL;
    }
    TreeNode<int>*max=root;
    for(int i=0;i<root->children.size();i++){
           TreeNode<int>*a=maxDataNode(root->children[i]);
        if(a->data>max->data){
            max=a;
        }
    }
    return max;
    
}
