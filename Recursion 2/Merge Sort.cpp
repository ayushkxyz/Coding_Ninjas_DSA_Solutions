
void merge(int arr[],int start,int end){
        int mid=(start+end)/2;
         int size=end-start+1;
        int *output=new int[size];
        int s=start;
        int e=mid+1;
        int k=0;
   while(s<=mid&&e<=end){
        if(arr[s]>arr[e]){
            output[k]=arr[e];
            k++;
            e++;
        }
        else{
            output[k]=arr[s];
            k++;
            s++;
        }

   }
   while(e<=end){
      output[k]=arr[e];
            k++;
            e++;
   }
   while(s<=mid){
       output[k]=arr[s];
            k++;
            s++;
   }int j=0;

   for(int i=start;i<=end;i++){
     arr[i]=output[j];
     j++;
   }

}
void merge_sort(int arr[],int start,int end){
       if(start>=end){
        return;
       }
       int mid=(start+end)/2;
       merge_sort( arr,start,mid);
       merge_sort(arr,mid+1,end);
       merge(arr,start,end);

}



void mergeSort(int input[], int size){
	// Write your code here
       return  merge_sort(input,0,size-1);
}
