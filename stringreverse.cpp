#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "anupriya";
    int n = s.length(); // Use length() to get the size of the string

    cout << "Length of string: " << n << endl;
    cout << "Original string: " << s << endl;

    int i = 0;
    int j = n - 1;
      
    // Reverse the string
    while (i < j) {
        swap(s[i], s[j]);
        i++;
        j--;
    }

    cout << "Reversed string: " << s << endl;

    return 0;
}
