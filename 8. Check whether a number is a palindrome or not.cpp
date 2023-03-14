#include <iostream>

using namespace std;

bool isPalindrome(int n) {
    int reversed = 0, remainder, original = n;

    while (n > 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n = n / 10;
    }

    if (original == reversed) {
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

    if (isPalindrome(n)) {
        cout << n << " is a palindrome." << endl;
    }
    else {
        cout << n << " is not a palindrome." << endl;
    }

    return 0;
}
