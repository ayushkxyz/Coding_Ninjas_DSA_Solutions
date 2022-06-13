
int allIndexes(int input[], int size, int x, int output[]) {
   
    if(size==0){
        return 0;
    }
    int s=allIndexes(input+1,size-1,x,output);
    for(int i=0;i<s;i++){
         output[i]++;
    }
    if(input[0]==x){
        for(int i=s;i>=0;i--){
             output[i+1]=output[i];
        }
        output[0]=0;
        s=s+1;
    }
    return s;
    
     
}
