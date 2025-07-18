#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,4,6,9,1};
    int size=sizeof(arr)/4;
    int s=0;
    int e=size-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}