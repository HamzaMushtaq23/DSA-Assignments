
//C++ Program to find the largest number among three number.

#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    int largest = num1; // Assume num1 is largest

    if (num2 > largest) {
        largest = num2;
    }

    if (num3 > largest) {
        largest = num3;
    }

    cout << "Largest number is " << largest << endl;
}
