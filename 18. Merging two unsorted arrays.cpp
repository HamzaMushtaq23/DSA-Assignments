#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr1[10], arr2[10], merge[20];
	int a, b, c, i;
	//Entering first array
	cout << "\n Enter the size of 1st array : ";
	cin >> a;

	cout << "\n Enter the first array"<<endl;
	cout << "\n";
	for ( i = 0; i < a; i++)
	{
		cout << "Enter value " << i + 1 << ": ";
		cin >> arr1[i];
		merge[i] = arr1[i];

	}
	cout << "\n First array values ";
	for ( i = 0; i < a; i++)
	{
		cout << arr1[i] << "  ";
	}
	cout << "\n";

	//Entering second array
	c = i;
	cout << "\n Enter the size of 2nd array : ";
	cin >> b;

	cout << "\n Enter the second array" << endl;
	cout << "\n";

	for ( i = 0; i < b; i++)
	{
		cout << "Enter value " << i + 1 << ": ";
		cin >> arr2[i];
		merge[c] = arr2[i];
		c++;
	}
	cout << "\n Second array values ";
	for ( i = 0; i < b; i++)
	{
		cout << arr2[i] << "  ";
	}
	cout << "\n";
	cout << "\n           Merged array is ";
	for ( i = 0; i < c; i++)
	{
		cout << merge[i] << "    ";
	}
	cout << "\n";
}