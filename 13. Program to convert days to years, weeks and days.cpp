//C++ Program to convert days to years, weeks and days.

#include <iostream>
using namespace std;

int main() {
    int days, years, weeks;
    cout << "\n Enter the days:" << endl;
    cin >> days;
    years = (days / 365);
    weeks = (days % 365) / 7;
    days = days - ((years * 365) + (weeks));

    cout << "\n" << years << " Year, " << weeks << " Weeks, and " << days << " Days" << endl;

}