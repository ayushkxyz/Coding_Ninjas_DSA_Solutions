 
void replaceWithDepthValue(TreeNode<int>* root) {
    // Write your code here
    
    queue<TreeNode<int>*>q1;
    root->data=0;
    q1.push(root);
    int h=1;
     q1.push(NULL);
    while(q1.size()!=1){
        while(q1.front()!=NULL){
            TreeNode <int>*front=q1.front();
            for(int i=0;i<front->children.size();i++){
                front->children[i]->data=h;
                q1.push(front->children[i]);
            }
            q1.pop();
            
        }
        
        q1.push(NULL);
        q1.pop();
        h++;
        
    }
}
    
