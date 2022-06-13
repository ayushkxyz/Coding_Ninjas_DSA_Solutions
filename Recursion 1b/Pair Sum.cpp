// Change in the given string itself. So no need to return or print the changed string.
int length(char input[]){
     int c=0;
    for(int i=0;input[i]!='\0';i++){
            c++;
    }
    return c;
}
void pair(char input[],int len,int start){
       if(input[start]=='\0'||input[start+1]=='\0'){
           return;
       } 
    
    if(input[start]==input[start+1]){
         for(int i=len;i>start;i--){
             input[i+1]=input[i];
         }
        input[start+1]='*';
        len=len+1;
          pair(input,len,start+2);
    }
  else{
      pair(input,len,start+1);
  }
    
}



void pairStar(char input[]) {
    // Write your code here
    int len=length(input);
     pair(input,len,0);

}
