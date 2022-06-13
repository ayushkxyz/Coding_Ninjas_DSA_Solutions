

int length(char input[]){
    int c=0;
    for(int i=0;input[i]!='\0';i++){
        c++;
    }
    return c;
}
bool helper(char input[],int i,int j){
     if(i>=j){
         return true;
     }
    if(input[i]!=input[j]){
        return false;
    }
    return helper(input,i+1,j-1);
}


bool checkPalindrome(char input[]) {
    // Write your code here
    int i=0;
    int j=length(input)-1;
     return helper(input,i,j);
        
        

}


