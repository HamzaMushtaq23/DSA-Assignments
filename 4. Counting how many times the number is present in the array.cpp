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
    
    //Counting the number

     int a, count=0; cout<<"\n Enter the Number u wanna count: ";

     cin>>a;

     for (int i=0;i<10;i++)

    {

     if (a==arr[i]) count++;

    } cout<<a<<" is present "<<count<<" times in the array ";
}
