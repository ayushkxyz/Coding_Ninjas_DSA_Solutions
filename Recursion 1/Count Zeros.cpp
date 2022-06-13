
int countZeros(int n) {
    // Write your code 
    if(n<=9&&n!=0){
        return 0;
    }
    if(n==0){
        return 1;
    }
     if(n%10==0){
         return 1+countZeros(n/10);
     }
    else{
        return countZeros(n/10);
    }
    
    
}


