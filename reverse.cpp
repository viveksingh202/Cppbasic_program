#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    int i=1;
    int rev=0;
    while(n>0){
        int ld=n%10;
        n=n/10;
        rev=rev*10+ld;
        
    }
    cout<<rev;
}