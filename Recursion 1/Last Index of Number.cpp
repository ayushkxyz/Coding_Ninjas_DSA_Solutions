int lastIndex(int input[], int size, int x) {
 
   if(size==0){
       return -1;
   }
    int a=lastIndex(input+1,size-1,x);
     if(a==-1&&input[0]==x){
         return 0;
     }
    else if(a>=0){
        return a+1;
    }
    else{
        return a;
    }

}
