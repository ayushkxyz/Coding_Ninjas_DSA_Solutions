#include<iostream>
using namespace std;

void selection_sort(int arr[],int n){
    if(n==0||n==1){
        return ;
    }
    int max=arr[0];
    int ind=0;
    for(int i=0;i<n;i++){
           if(arr[i]>max){
               max=arr[i];
               ind=i;
           }
    }
    swap(arr[ind],arr[n-1]);
    selection_sort(arr,n-1);
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
