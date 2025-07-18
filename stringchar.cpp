#include<iostream>
#include<cstring> // for strlen
using namespace std;

void reverse(char arr[], int n){
    int s = 0;
    int e = n - 1;
    while(s < e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}
int getlenght(char arr[]){
    int count=0;
    for(int i=0; arr[i]!='\0'; i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cout << "Enter name: ";
    cin >> name;
    
    int length = strlen(name); // Get the actual length of the input string
    
    cout << "Your name is " << name << endl;
    
    reverse(name, length); // Reverse the actual characters in the name
    
    cout << "Reversed name is " << name << endl;
    cout<<"lenght of string is "<<getlenght(name);
    
    return 0;
}