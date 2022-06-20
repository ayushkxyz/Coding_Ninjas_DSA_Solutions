 int sum(TreeNode<int>*root){
     int s=root->data;
     for(int i=0;i<root->children.size();i++){
         s=s+root->data;
     }
     return s;
 }

TreeNode<int>* maxSumNode(TreeNode<int>* root) {
    // Write your code here
         if(root==NULL){
             return NULL;
         }
    TreeNode<int>*ans=root;
    
     int s=sum(root);
    for(int i=0;i<root->children.size();i++){
          TreeNode<int>*small=maxSumNode(root->children[i]);
        int su=sum(small);
        if(su>s){
            ans=small;
        }
    }
    return ans;
    
}
