#include <iostream>
#include <conio.h>
using namespace std;
int main() {
	int arr1[5], arr2[5];

	//Entering first array

	cout << "Enter the first array" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Enter value " << i + 1 << ": ";
		cin >> arr1[i];
	}
	cout << "\n First array values ";
	for (int i = 0; i < 5; i++) {
		cout << arr1[i] << "  ";
	}
	cout << "\n";

	//Entering second array

	cout << "\n Enter the Second array" << endl;
	for (int j = 0; j < 5; j++) {
		cout << "Enter value " << j + 1 << ": ";
		cin >> arr2[j];
	}
	cout << "\n Second array values ";
	for (int j = 0; j < 5; j++) {
		cout << arr2[j] << "  ";
	}
	cout << "\n";
	//Comparing two array to check if they r same
	int count=0;
	for (int i = 0;i<5; i++)
	{
		if (arr1[i] != arr2[i])
		{
			count++;
			break;
		}
	}
	if (count != 0) {
		cout << "These arrays are not the same" << endl;
	}
	else {
		cout << "These arrays are the same" << endl;
	}
}