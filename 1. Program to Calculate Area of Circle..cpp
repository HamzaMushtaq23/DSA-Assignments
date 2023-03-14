
     //C++ Program to Calculate Area of Circle.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float Area, pie = 3.1412;
	int r;
	cout << "Enter the radius of the circle: ";
	cin >> r;
	Area = pie * r*r;
	cout << "\n";
	cout << "Area of this circle is: '" << Area <<"m'"<< endl;
	cout << "\n";
}
