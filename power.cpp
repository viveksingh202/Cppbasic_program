#include<iostream>
using namespace std;
int power(int a, int b){
    if(b==0){
        return 1;
    }
    return a*power(a,b-1);
}
int main(){
    int a;
    cout<<"enter base: ";
    cin>>a;
    int b;
    cout<<"enter expoenet: ";
    cin>>b;
    cout<<power(a,b);
}