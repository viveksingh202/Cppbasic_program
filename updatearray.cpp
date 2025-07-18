#include<iostream>
using namespace std;
void update(int arr[], int n){
    arr[1]=6;
    arr[4]=5;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[5]={2,3,4,9,1};
    int n=sizeof(arr)/4;
    update(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    

}