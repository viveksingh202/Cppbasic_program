#include<iostream>
using namespace std;

int findunique(int arr[], int n) {
    int ans = 0;
    for(int i = 0; i < n; i++) {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main() {
    int arr[] = {3, 7, 2, 2, 7, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = findunique(arr, n);
    cout << "Unique element is " << ans;
    return 0;
}
