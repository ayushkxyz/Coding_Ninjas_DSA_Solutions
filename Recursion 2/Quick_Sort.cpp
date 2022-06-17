int partition(int arr[],int start,int end){
     int count=0;
     int elem=arr[start];
     int ij=start+1;
     while(ij<=end){
        if(arr[ij]<=elem){
            count++;
        }
        ij++;
     }
     int pivot=count+start;
       arr[start]=arr[pivot];
    arr[pivot]=elem;
         int i=start,j=end;
       while(i<pivot&&j>pivot){
              if(arr[i]<=elem){
                i++;
              }
              else if(arr[j]>elem){
                j--;
              }
              else{
                int temp=arr[i];
                  arr[i]=arr[j];
                  arr[j]=temp;
                i++;
                j--;
              }
     }
     return pivot; 
}


void quick_sort(int arr[],int start,int end){
      if(start>=end){
        return ;
      }
    int c=partition(arr,start,end);
      quick_sort(arr,start,c-1);
     quick_sort(arr,c+1,end);
}




void quickSort(int input[], int size) {
    return quick_sort(input,0,size-1);
   
    
}
