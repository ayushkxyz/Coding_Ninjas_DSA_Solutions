#include<iostream>
using namespace std;
void insertion_sort(int arr[],int s,int n){
    if(s==n){
        return ;
    }
    int i=s;
    while(i>0){
     if(arr[i]<arr[i-1]){
         swap(arr[i],arr[i-1]);
     }
     i--;
    }
    insertion_sort(arr,s+1,n);
}



 void insertion_sort(int arr[],int n){
     if(n==0||n==1){
         return ;
   }
     insertion_sort(arr,1,n);
   
 }


int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertion_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
