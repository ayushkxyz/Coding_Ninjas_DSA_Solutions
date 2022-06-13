int firstIndex(int input[], int size, int x) {
  
     if(size==0){
         return -1;
     }
    if(input[0]==x){
        return 0;
    }
    int a=firstIndex(input+1,size-1,x);
     if(a>=0)
     {
         return a+1;
     }    
    else{
        a;
    }
}
