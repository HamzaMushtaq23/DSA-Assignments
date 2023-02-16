#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	for(int i=0;i<10;i++)
	{
		cout<<"Enter value of "<<i+1<<" : ";
		cin>>arr[i];
		
	}
	cout<<"\n Values of array are : ";
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<"  ";
	}
	//Reversing an array

    cout<<"\n The reversed array is : ";
	for(int i=9;i>=0;i--)
	{
		cout<<arr[i]<<"  ";
		
	}
		
}
