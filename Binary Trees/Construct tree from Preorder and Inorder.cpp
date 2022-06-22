BinaryTreeNode<int>* helper(int *preorder,int *inorder,int isi,int iei,int psi,int pei){
    if(isi>iei){
        return NULL;
    }
   BinaryTreeNode<int>*root=new BinaryTreeNode<int>(preorder[psi]);
         int c=0;
    for(int i=isi;inorder[i]!=preorder[psi];i++){
           c++;
    } 
    int leftisi=isi;
    int leftiei=isi+c-1;
    int risi=leftiei+2;
    int riei=iei;
    int leftpsi=psi+1;
    
   
    int leftpei=psi+c;
    int rpsi=leftpei+1;
    int rpei=pei;
    root->left=helper(preorder,inorder,leftisi,leftiei,leftpsi,leftpei);
    root->right= helper(preorder,inorder,risi,riei,rpsi,rpei);
    return root;
    
        
        
      
}



BinaryTreeNode<int>* buildTree(int *preorder, int preLength, int *inorder, int inLength) {
    // Write your code here
    return helper(preorder,inorder,0,inLength-1,0,preLength-1);
    
    
    
       
    
}
