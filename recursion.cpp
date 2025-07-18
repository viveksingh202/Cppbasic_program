#include<iostream>
using namespace std;
void print(int x, int n){
    if(n>0){
        return;
    }
    cout<<x<<endl;
    print(x+1,n--);
    //cout<<x<<endl;
    
}
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    print(1,n);
}