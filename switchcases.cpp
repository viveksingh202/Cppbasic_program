#include<iostream>
using namespace std;
int main(){
    char op;
    int n1,n2;
   // cout<<"enter first number: ";
    cin>>n1;
    cin>>op;
   // cout<<"enter second number: ";
    cin>>n2;
    switch(op)
    {
    case '+':
        cout<<n1+n2;
        break;
    case '-':
        cout<<n1-n2;
        break;
    case '*':
        cout<<n1*n2;
    case '/':
        cout<<n1/n2;
        break;
    
    default:
        cout<<"invalid value";
        break;
    }
}