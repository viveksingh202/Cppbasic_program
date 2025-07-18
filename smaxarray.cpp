#include<iostream>
using namespace std;
int main(){
    int arr[]={2,1,3,4,15,6,8,16};
    int mx=INT8_MIN;
    for(int i=0;i<sizeof(arr)/4;i++){
        if(arr[i]>mx){
            mx=max(mx,arr[i]);
        }
    }
    int smx=INT8_MIN;
    for(int i=0;i<sizeof(arr)/4;i++){
        if(arr[i]!=mx){
            smx=max(smx,arr[i]);
        }
    }
    cout<<smx;
}