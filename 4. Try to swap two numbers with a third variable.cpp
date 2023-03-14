
     //Try to swap two numbers with a third variable

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a, b, temp;
	cout << "\n Enter Value of a: " ;
	cin >> a;
	cout << "\n Enter Value of b: " ;
	cin >> b;
	//swapping
	cout << "\n After Swapping " << endl;
	temp = a;
	a = b;
	b = temp;
	cout << "\n Value of a becomes: " << a << endl;
	cout << "\n Value of b becomes: " << b << endl;
	cout << "\n";
}