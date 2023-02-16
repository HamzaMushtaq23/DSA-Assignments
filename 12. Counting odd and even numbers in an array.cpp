#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter value of " << i + 1 << " : ";
		cin >> arr[i];

	}
	cout << "\n Values of array are = ";
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << "\n";
	//Counting Odd numbers
	int count = 0;
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] % 2 != 0)
			count++;
	}
	cout << "\n There are '" << count << "' odd numbers in the array" << endl;

	//Counting even numbers
	int count1 = 0;
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] % 2 == 0)
			count1++;
	}
	cout << "\n There are '" << count1 << "' even numbers in the array";
	cout << "\n";
}