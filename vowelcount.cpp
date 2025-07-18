#include<iostream>
using namespace std;

int main() {
    string s;
    cout << "Enter string: ";
    getline(cin, s);
    cout << s << endl;

    int n = s.size();
    int count = 0;
    for(int i = 0; i < n; i++) {
        char ch =(s[i]); // convert to lowercase for uniform check
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    cout << "Number of vowels: " << count << endl;
    return 0;
}
