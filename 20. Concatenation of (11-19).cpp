#include<iostream>
#include<conio.h>
using namespace std;

void Question11()
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

void Question12()
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

void Question13()
{
	int arr[5];
	cout << "Enter the 'Array'" << endl;
	cout << "\n";
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
	//Sorting in ascending order
	cout << "\n Array sorted in 'Ascending order' :  ";
	int temp;
	for (int i = 0; i < 5; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		cout << arr[i] << "      ";
	}
}

void Question14()
{
	int arr[5];
	cout << "Enter the 'Array'" << endl;
	cout << "\n";
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
	//Sorying in desscending order
	cout << "\n";
	cout << "\n Array sorted in 'Descending order' : ";
	int temp;
	for (int i = 0; i < 5; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		cout << arr[i] << "   ";
	}
	cout << "\n";
}

void Question15()
{
	int arr[5];
	cout << "Enter the 'Array'" << endl;
	cout << "\n";
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
	//Finding 2nd smallest element
	cout << "\n";

	int temp;
	for (int i = 0; i < 5; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	int i = 1;
	cout << "\n 2nd smallest element in the array is : '" << arr[i] << "'";
	cout << "\n";
}

void Question16()
{
	int arr[5];
	cout << "Enter the 'Array'" << endl;
	cout << "\n";
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
	//Finding 2nd largest element
	cout << "\n";

	int temp;
	for (int i = 0; i < 5; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	int i = 1;
	cout << "\n 2nd Largest element in the array is : '" << arr[i] << "'";
	cout << "\n";
}

void Question17()
{
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
		cout << "\n These arrays are not the same" << endl;
	}
	else {
		cout << "\n These arrays are the same" << endl;
	}
}

void Question18()
{
	int arr1[10], arr2[10], merge[20];
	int a, b, c, i;
	//Entering first array
	cout << "\n Enter the size of 1st array : ";
	cin >> a;

	cout << "\n Enter the first array" << endl;
	cout << "\n";
	for (i = 0; i < a; i++)
	{
		cout << "Enter value " << i + 1 << ": ";
		cin >> arr1[i];
		merge[i] = arr1[i];

	}
	cout << "\n First array values ";
	for (i = 0; i < a; i++)
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

	for (i = 0; i < b; i++)
	{
		cout << "Enter value " << i + 1 << ": ";
		cin >> arr2[i];
		merge[c] = arr2[i];
		c++;
	}
	cout << "\n Second array values ";
	for (i = 0; i < b; i++)
	{
		cout << arr2[i] << "  ";
	}
	cout << "\n";
	cout << "\n           Merged array is ";
	for (i = 0; i < c; i++)
	{
		cout << merge[i] << "    ";
	}
	cout << "\n";
}

void Question19()
{
	int arr[5];
	cout << "Enter the 'Array'" << endl;
	cout << "\n";
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
	//First sort this array in ascending order

	int temp;
	for (int i = 0; i < 5; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	//Now finding maximum difference
	cout << "\n";
	int Max;
	int i = 0, j = 4;
	Max = arr[j] - arr[i];
	cout << "\n Maximum difference is : '" << Max << "'" << endl;
}


int main()
{
	int Press;

	//Menu
	cout << "\n                                  Commands Menu                                 " << endl;
	cout << "          Press 1  'For Separating Odd and Even numbers' " << endl;
	cout << "          Press 2  'For Counting Odd and Even numbers' " << endl;
	cout << "          Press 3  'For Sorting array in Ascending order' " << endl;
	cout << "          Press 4  'For Sorting array in Descending order' " << endl;
	cout << "          Press 5  'For 2nd Smallest element of the array' " << endl;
	cout << "          Press 6  'For 2nd Largest element of the array' " << endl;
	cout << "          Press 7  'For Checking if two arrays are same or not' " << endl;
	cout << "          Press 8  'For Merging two unsorted arrays' " << endl;
	cout << "          Press 9  'For Finding Maximum difference between two elements' " << endl;
	cout << "\n                                  Enter Command: ";
	cin >> Press;
	//now for the main switch statements
	switch (Press) {
	case 1:
		Question11();
			break;
	case 2:
		Question12();
		break;
	case 3:
		Question13();
			break;
	case 4:
		Question14();
		break;
	case 5:
		Question15();
		break;
	case 6:
		Question16();
		break;
	case 7:
		Question17();
		break;
	case 8:
		Question18();
		break;
	case 9:
		Question19();
		break;
	default:
		// operator is doesn't match any case constant (1,2,3,4,5,6,7,8,9)
		cout << "Error! the command is not correct" << endl;
		break;
	}
}
