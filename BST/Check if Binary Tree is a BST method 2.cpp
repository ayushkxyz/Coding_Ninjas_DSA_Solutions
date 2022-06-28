class isBSTclass{
     public:
    int leftmax;
    
    int rightmin;
    bool isbst_;
    

};

isBSTclass helper(BinaryTreeNode<int> *root){
	// Write your code here
    if(root==NULL){
        isBSTclass obj1;
        obj1.leftmax=INT_MIN;
        obj1.rightmin=INT_MAX;
         obj1.isbst_=true;
        
        return obj1;
    }
    isBSTclass left_tree= helper(root->left);
    isBSTclass right_tree=helper(root->right);
     int maxleft=left_tree.leftmax;
    bool rightisBST=right_tree.isbst_;
    bool leftisBST=left_tree.isbst_;
    int minrigth=right_tree.rightmin;
    isBSTclass ans;
      if(rightisBST&&leftisBST&&maxleft<root->data&&root->data<minrigth){
          ans.isbst_=true;
          
      }
    else{
        ans.isbst_=false;
    }
    ans.leftmax=max(root->data,maxleft);
    ans.rightmin=min(root->data,minrigth);
  return ans;
  }

bool isBST(BinaryTreeNode<int> *root){
    if(root==NULL){
        return true;
    }
    
    isBSTclass ans=helper(root);
    return ans.isbst_;
}
