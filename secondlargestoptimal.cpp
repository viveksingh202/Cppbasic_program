#include<iostream>
#include<climits> // For INT_MIN
using namespace std;

int secondLargest(int arr[], int n) {
    if(n < 2) {
        return INT_MIN; // Not enough elements
    }

    int max1 = INT_MIN;
    int max2 = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    return max2;
}

int main() {
    int arr[] = {2,3,-4,8,7,5,9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = secondLargest(arr, size);

    if(result == INT_MIN) {
        cout << "No second largest element exists" << endl;
    } else {
        cout << "Second largest element is " << result << endl;
    }

    return 0;
}
