

//Program to find the factorial of a number

#include<iostream>
using namespace std;
int main()
{
    int n, fact = 1;
    cout << "\n Enter Number To Find Its Factorial:  ";
    cin >> n;
    for (int k = 1; k <= n; k++) {
        fact = fact * k;
    }
    cout << "\n Factorial of Given Number is =" << fact << endl;

}