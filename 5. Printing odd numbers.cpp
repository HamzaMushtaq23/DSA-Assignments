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
	cout<<"\n Values of array are = ";
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<"  ";
	}
	//Printing odd numbers

    cout<<"\n List of Odd numbers are : ";
	for(int i=0;i<10;i++)
	{
		if(arr[i]%2!=0)
		cout<<arr[i]<<" ";
		
	}
		
}
