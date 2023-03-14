
//c++ program to check number positive,negative or zero//

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n1;
    cout << "Enter the number" << endl;
    cin >> n1;
    if (n1 > 0) {
        cout << n1 << " is a positive number";
    }
    else if (n1 < 0) {
        cout << n1 << " is a Negative number";
    }
    else {
        cout << "You entered Zero";
    }
 
}