#include<iostream>
using namespace std;
int main()
{
    int n, m, Rev = 0;
    cout << "Enter the Number: ";
    cin >> n;
    while (n != 0)
    {
        m = n % 10;
        Rev = m + (Rev * 10);
        n = n / 10;
    }
    cout << "\n Reverse of the Number = " << Rev;
    cout << "\n";

}
