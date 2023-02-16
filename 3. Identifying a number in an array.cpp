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
    //Identifying a number in an array

    int a;

    cout<<"\n Enter the Number u wanna find: ";

    cin>>a;

    for (int i=0; i<10; i++)

    {

     a==arr[i];
}
     cout<<a<<" is present in the array";
    
}
