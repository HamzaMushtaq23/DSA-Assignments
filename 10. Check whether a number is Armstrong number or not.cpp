//Write a C++ program to check whether a number is Armstrong number or not.

#include <iostream>
#include <cmath>

using namespace std;

bool isArmstrong(int n) {
    int sum = 0, digit, original = n, numDigits = 0;

    while (n > 0) {
        n /= 10;
        numDigits++;
    }

    n = original;

    while (n > 0) {
        digit = n % 10;
        sum += pow(digit, numDigits);
        n /= 10;
    }

    if (sum == original) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (isArmstrong(n)) {
        cout << n << " is an Armstrong number." << endl;
    }
    else {
        cout << n << " is not an Armstrong number." << endl;
    }

    return 0;
}
