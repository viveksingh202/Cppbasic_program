#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    int i=1;
    int product =1;
    while(n>0){
        int ld=n%10;
        n=n/10;
        product=product*ld;
        
    }
    cout<<product;
}