#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter no of rows: ";
    cin>>n;
    //cout<<"enter no of column: ";
    //cin>>m;
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<<"x ";
        }
        cout<<endl;
    }
}