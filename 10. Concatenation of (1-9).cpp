#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	int Press;
	//local variable declaration
	int min=arr[0];
	 int max=arr[0];
	    int a;
	      int aa, count=0;
	       int sum=0;
	      	int count1;
	      	
	//Entering values of array
	cout<<"\n                                  Enter the Array                                 "<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<"          Enter value of "<<i+1<<" : ";
		cin>>arr[i];
		
	}
	cout<<"\n Values of array are : ";
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<"   ";
	}
	//Menu
	cout<<"\n                                  Commands Menu                                 "<<endl;
	cout<<"          Press 1  'For finding minimum number' "<<endl;
	cout<<"          Press 2  'For finding maximum number' "<<endl;
	cout<<"          Press 3  'For Identifying a number in an array' "<<endl;
	cout<<"          Press 4  'For Counting the number' "<<endl;
	cout<<"          Press 5  'For Printing odd numbers' "<<endl;
	cout<<"          Press 6  'For Printing even numbers' "<<endl;
	cout<<"          Press 7  'For Finding sum of all elements' "<<endl;
	cout<<"          Press 8  'For Reversing the array' "<<endl;
	cout<<"          Press 9  'For finding Unique elements' "<<endl;
	cout<<"\n                                  Enter Command: ";
	cin>>Press;
	 //now for the main switch statements
	 switch (Press) {
        case 1:
            	//finding minimum number

               
	           for(int i=1;i<10; i++)
			   {
			   if(min>arr[i]) 
            	min=arr[i];
               } 
            	cout<<"\n Minimum Number is: "<<min;
            	
            break;
         case 2:
           	//finding maximum number

            
	         for(int i=1;i<10; i++)
             {
             if(max<arr[i]) 
	         max=arr[i];
             } 
             
            	cout<<"\n Maximum Number is: "<<max;

            break;
        case 3:
             //Identifying a number in an array

           
             cout<<"\n Enter the Number u wanna find: ";
             cin>>a;

             for (int i=0; i<10; i++)
			  {
			  a==arr[i];
			  }
			  
              cout<<a<<" is present in the array";
              
            break;
        case 4:
             //Counting the number

             
			  cout<<"\n Enter the Number u wanna count: ";
              cin>>aa;

              for (int i=0;i<10;i++)
              {
			   if (aa==arr[i]) 
			   count++;
			   } 
			   cout<<aa<<" is present "<<count<<" times in the array ";
			   
            break;
        case 5:
            	//Printing odd numbers

                cout<<"\n List of Odd numbers are : ";
					for(int i=0;i<10;i++)
						{
	                	if(arr[i]%2!=0)
		                cout<<arr[i]<<" ";
						}
						
            break;
        case 6:
            	//Printing even numbers

                cout<<"\n List of Even numbers are : ";
	            for(int i=0;i<10;i++)
	            {
		         if(arr[i]%2==0)
	            	cout<<arr[i]<<" ";
		        }
		        
            break;
        case 7:
            //Finding sum of all elements

            
	         for(int i=0;i<10;i++)
	         {
	          sum=sum+arr[i];	
	         }
	     	cout<<"\n The Sum of all the numbers are : "<<sum<<endl;
	     	
            break;
        case 8:
         	//Reversing an array

             cout<<"\n The reversed array is : ";
	         for(int i=9;i>=0;i--)
	         {
	        	cout<<arr[i]<<"  ";
		     }
		     
            break;
        case 9:
            	//Printing Unique elements
            	cout << "\n Unique elements are ";

            	for (int i = 0; i < 10; i++)
            	{
	            	count1 = 0;
	            	for (int j = 0; j < 10; j++)
	             	{
		             	if (i != j)
			            {
			            	if (arr[i] == arr[j])
			            	{
			            		count1++;
			            	}
		            	}
	             	}
	                 	if (count1 == 0)
		              {
		             	cout << "'"<<arr[i] << "'       ";
	                	}
	            }
            break;
        default:
            // operator is doesn't match any case constant (1,2,3,4,5,6,7,8,9)
            cout << "Error! the command is not correct"<<endl;
            break;
    }
	
	
}
