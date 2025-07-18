#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"enter cost price: ";
    cin>>cp;
    cout<<"enter selling price: n";
    cin>>sp;
    if(sp>cp){
        cout<<"profit "<<sp-cp;
    }
    else{
        cout<<"loss "<<cp-sp;
    }
}