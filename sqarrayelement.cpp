#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter array element: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]*arr[i]<<" ";
    }
}