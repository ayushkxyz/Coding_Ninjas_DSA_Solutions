
vector<int>* getPath(BinaryTreeNode<int> *root , int data) {
	// Write your code here
    if(root==NULL){
        vector <int>*v=NULL;
        return v;
    }
    if(root->data==data){
        vector<int>*v1=new vector<int>();
        v1->push_back(data);
        return v1;
    }
     if(root->data>data){
        vector<int>*vleft=getPath(root->left,data);
        if(vleft!=NULL){
            vleft->push_back(root->data);
            return vleft;
        }
        
    }
    if(root->data<data){
          vector<int>*vright=getPath(root->right,data);
        if(vright!=NULL){
            vright->push_back(root->data);
            return vright;
        }
        }

    }
