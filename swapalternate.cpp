#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,4,5,6,7,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        if(i%2==0){
            swap(arr[i],arr[i+1]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}