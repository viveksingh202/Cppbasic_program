#include <iostream>
using namespace std;

// Function to find the integer part of the square root using binary search
double SqrtIntegerPart(int n) {
    int s = 0, e = n;
    double ans = 0;

    while (s <= e) {
        int mid = s + (e - s) / 2;
        long long sq = (long long)mid * mid;

        if (sq == n) {
            return mid; // Exact square root found
        } else if (sq < n) {
            ans = mid;  // Store potential answer
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}

// Function to get precise square root up to given decimal places
double PreciseSqrt(int n, int precision) {
    double ans = SqrtIntegerPart(n);
    double step = 0.1;

    // Refining the answer with the required decimal precision
    for (int i = 0; i < precision; i++) {
        while (ans * ans <= n) {
            ans += step;
        }
        ans -= step; // Step back once it goes beyond the square root
        step /= 10;  // Reduce step size for more precision
    }
    return ans;
}

int main() {
    int n, precision;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter the number of decimal places for precision: ";
    cin >> precision;

    cout << "The precise square root of " << n << " is " << PreciseSqrt(n, precision) << endl;
    return 0;
}
