#include<iostream>
using namespace std; 
void swap(int* x, int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
    
}
int main(){
    int a,b;
    cout<<"enter first number: ";
    cin>>a;
    cout<<"enter second number: ";
    cin>>b;
    cout<<a<<"  "<<b<<endl;
    swap(&a,&b);
    cout<<a<<"  "<<b;
}