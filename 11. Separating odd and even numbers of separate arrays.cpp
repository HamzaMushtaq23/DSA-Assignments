#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr1[5], arr2[5];

	//Entering first array

	cout << "Enter the first array" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter value " << i + 1 << ": ";
		cin >> arr1[i];
	}
	cout << "\n First array values ";
	for (int i = 0; i < 5; i++)
	{
		cout << arr1[i] << "  ";
	}
	cout << "\n";

	//Entering second array

	cout << "\n Enter the Second array" << endl;
	for (int j = 0; j < 5; j++)
	{
		cout << "Enter value " << j + 1 << ": ";
		cin >> arr2[j];
	}
	cout << "\n Second array values ";
	for (int j = 0; j < 5; j++)
	{
		cout << arr2[j] << "  ";
	}
	int press;
	//Menu 
	cout << "\n";
	cout << "\n                                  Commands Menu                                 " << endl;
	cout << "          Press 1  'For Printing Odd numbers from first array' " << endl;
	cout << "          Press 2  'For Printing even numbers from second array' " << endl;
	cout << "\n                                  Enter Command: ";
	cin >> press;

	//For separating odd even integers


	switch (press) {
	case 1:
		//Printing odd numbers of the first array

		cout << "\n List of Odd numbers of First array are : ";
		for (int i = 0; i < 5; i++)
		{
			if (arr1[i] % 2 != 0)
				cout << arr1[i] << "     ";

		}
		break;
	case 2:
		//Printing even numbers of the second array

		cout << "\n List of Even numbers of second array are : ";
		for (int j = 0; j < 5; j++)
		{
			if (arr2[j] % 2 == 0)
				cout << arr2[j] << "     ";

		}
		break;
	default:
		// operator is doesn't match any case constant (1,2)
		cout << "Error! the command is not correct" << endl;
		break;
	}
	cout << "\n";
}
