int power(int x, int n) {
  
    if(n==0){         //base case
        return 1;
    }
    return x*power(x,n-1);    //recursive call;

}
