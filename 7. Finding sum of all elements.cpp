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
	//Finding sum of all elements

    int sum=0;
	for(int i=0;i<10;i++)
	{
	 sum=sum+arr[i];	
	}
		cout<<"\n The Sum of all the numbers are : "<<sum;
}
