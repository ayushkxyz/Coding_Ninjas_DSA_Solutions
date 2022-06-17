// input - input array
// size - length of input array
// element - value to be searched

int helper(int input[],int low,int high,int element){
    if(low>high){
        return -1;
    }
    int mid=(low+high)/2;
      if(input[mid]==element){
          return mid;
      }
    else if(input[mid]>element){
        return helper(input,low,mid-1,element);
    }
    else{
        return helper(input,mid+1,high,element);
    }
}


int binarySearch(int input[], int size, int element) {
    // Write your code here
    return helper(input,0,size-1,element);

}
