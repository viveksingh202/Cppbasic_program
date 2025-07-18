#include<iostream>
using namespace std;
void reverse(int arr[],int size){
    int i=0;
    int j=size-1;
    while(i<=j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }

}
void print(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={2,9,4,5,7,8,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    reverse(arr,n);
    print(arr,n);

}