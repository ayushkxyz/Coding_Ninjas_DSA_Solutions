
         

int len(char input[]){
    int c=0;
    for(int i=0;input[i]!='\0';i++){
         c++;
    }
    return c;
}

int helper(char input[],int len){
     if(len==-1){
         return 0;
     }
       return  helper(input,len-1)*10 +(input[len]-'0');
  
    
}


int stringToNumber(char input[]) {

     int a=len(input);
     return helper(input,a-1);

}


