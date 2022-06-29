BinaryTreeNode<int>* helper(int *p,int psi,int pei,int *i,int isi,int iei){
    if(isi>iei){
        return NULL;
    }
     BinaryTreeNode<int>* root=new BinaryTreeNode<int>(p[pei]);
      int c=isi;
    int count=0;
    while(i[c]!=p[pei]){
          c=c+1;
        count++;
    }
    
    int lisi=isi;
    int liei=c-1;
    int lpsi=psi;
    int lpei=psi+count-1;
    int risi=liei+2;
    int riei=iei;
    int rpsi=lpei+1;
    int rpei=pei-1;
     
        root->left=helper(p,lpsi,lpei,i,lisi,liei);
        root->right=helper(p,rpsi,rpei,i,risi,riei);
        return root;
}


BinaryTreeNode<int>* buildTree(int *postorder, int postLength, int *inorder, int inLength) {
    // Write your code here
    
    return helper(postorder,0,postLength-1,inorder,0,inLength-1);
    
}
