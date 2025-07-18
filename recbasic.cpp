#include<iostream>
using namespace std;
void greet(int x){
    if(x<=0)
    return;
    cout<<"hey"<<endl;
    greet(x-1);
}
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    greet(n);
}