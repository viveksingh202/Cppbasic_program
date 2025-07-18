#include <iostream>
using namespace std;

void rotatedArray(int arr[], int n, int temp[], int k) {
    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }
}

void print(int temp[], int n) {
    for (int i = 0; i < n; i++) {
        cout << temp[i] << " ";  // Corrected to print temp, not arr
    }
    cout << endl;
}

int main() {
    int arr[6] = {2, 4, 6, 8, 10, 12};
    int temp[6] = {0};
    int k;

    cout << "Rotated by: ";
    cin >> k;

    rotatedArray(arr, 6, temp, k);
    print(temp, 6);

    return 0;
}
