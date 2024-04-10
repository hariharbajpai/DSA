#include<iostream>
using namespace std;

// For integer
int binarySearch(int n) {
    if (n == 0 || n == 1) {
        return n;
    }

    int s = 0;
    int e = n - 1;
    long long int mid, ans = -1;

    while (s <= e) {
        mid = s + (e - s) / 2;
        long long int square = mid * mid;

        if (square == n) {
            return mid;
        }

        if (square < n) {
            ans = mid;
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }

    return ans;
}

double morePrecision(int n, int precision, int tempSol) {
    double factor = 1.0;
    double ans = tempSol;

    for (int i = 0; i < precision; i++) {
        factor /= 10;
        for (double j = ans; j * j < n; j += factor) {
            ans = j;
        }
    }

    return ans;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int tempSol = binarySearch(n);
    cout << "Initial approximation: " << tempSol << endl;
    cout << "More precise answer is: " << morePrecision(n, 3, tempSol) << endl;
    return 0;
}
