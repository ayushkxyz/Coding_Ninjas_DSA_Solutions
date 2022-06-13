// Change in the given string itself. So no need to return or print anything
#include<cstring>
void helper(char input[],int len,int st){
     if(input[st]=='\0'||input[st+1]=='\0'){
        return ;
    }
     if(input[st]=='p'&&input[st+1]=='i'){
          input[st]='3';
          input[st+1]='.';
         for(int i=len;i>st+1;i--){
             input[i+2]=input[i];
         }
         input[st+2]='1';
         input[st+3]='4';
         len=len+2;
         helper(input,len,st+4);
     }
    else{
        helper(input,len,st+1);
    }
    
    
}




void replacePi(char input[]) {
    int len=strlen(input);
    helper(input,len,0);
	// Write your code here
}

 
     



