#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter string: ";
    cin>>s;
    cout<<"original string is "<<s;
    cout<<endl;
    int n=s.size();
    int i=0;
    int j=n-1;
    while(i<j){
        int temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
    
    cout<<"reverse string is "<<s;
}