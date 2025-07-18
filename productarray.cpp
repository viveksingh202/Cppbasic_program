#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int product=1;
    for(int i=0;i<sizeof(arr)/4;i++){
        product=product*arr[i];
    }
    cout<<product;
}