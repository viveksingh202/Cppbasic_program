#include<iostream>
using namespace std;
int main(){
    int arr[]={2,1,3,4,5,6,8,16};
    for(int i=sizeof(arr)/4-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }

}
    