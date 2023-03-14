#include <iostream>
using namespace std;
int main()
{
    int n, control = 0;
    cout << "\n Check whether a number is prime or not:"<<endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            control++;
        }
    }
    if (control == 2)
    {
        cout << "\n The entered number is a prime number: "<<endl;
    }
    else {
        cout << "\n  The number you entered is not a prime number: "<<endl;
    }
}