

//The series following 1,1,2,3,5,8…, can you try to print the series utpo n elements ?

#include<iostream>
using namespace std;
int main()
{
    int first = 0, second = 1, a, num, sum = 0;
    cout << "Enter the number of terms: "; cin >> num;
    //Entering the terms
    cout << "Fibonacci Series: ";

    for (a = 0; a < num; a++)
    {
        if (a <= 1)
        {
            sum = a;
        }
        // to print 0 and 1
        else
        {
            sum = first + second;
            first = second;
            second = sum;
        }
        cout << sum << " ";
    }
}