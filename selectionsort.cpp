#include<iostream>
using namespace std;
void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}
int main(){
    int arr[8]={8,5,4,9,2,7,1,3};
    selectionSort(arr, 8);
    cout<<"Sorted array is ";
    for(int i=0; i<8; i++){
        cout<<arr[i]<<" ";
    }
}