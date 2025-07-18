#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    for(int step=0; step<n; step++){
        for(int i=0;i<n; i++){
            for(int s=0; s<step*n; s++){
                cout<<"  ";
            }
            for(int j=0;j<=i;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
    }
}