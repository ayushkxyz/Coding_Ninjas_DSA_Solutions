#include<iostream>
#include<cmath>
using namespace std;
void selection_sort(int arr[],int n){
     
     for(int i=0;i<n;i++){
         int mini=arr[i];
         int minindex=i;
         int j;
         for(j=i+1;j<n;j++){
             if(mini>arr[j]){
                 mini=arr[j];
                minindex=j;
             }
         }
         swap(arr[i],arr[minindex]);
     }

}

int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
