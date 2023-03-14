#include<iostream>
using namespace std;
int stack[100], n = 100, top = -1,counter=0,i=0;
int arrpop[100];
void push(int val)
{
	if (top >= n - 1)
		cout << "Stack Overflow" << endl;
	else
	{
		top++;
		stack[top] = val;
	}
}


void pop()
{
	
	if (top <= -1)
		cout << "Stack Underflow" << endl;
	else
	{
		cout << "The popped element is " << stack[top] << endl;
		
		
		while(i<n)
		{
			arrpop[i] = stack[top];
			i++;
			break;
		}
		
		top--;
		counter++;
		
	}
}

void Popelement()
{
	cout << "Poped elements are " << endl;
	for (int i = 0; i < counter; i++)
	{
		cout << arrpop[i] << "     ";
	}
	cout << "\n";
}


void IsFull()
{
	
	if (top >= 99)
		cout << "Stack is full" << endl;
	else
		cout << " Stack is not full"<<endl;
}

void IsEmpty()
{
	if (top <= -1)
		cout << "Stack is Empty" << endl;
	else
		cout << "Stack is not empty";
}

void Even()
{
	cout << "\n List of Even numbers are : ";
	for (int j = 0; j <=top; j++)
	{
		if (stack[j] % 2 == 0)
			cout << stack[j] << "     "<<endl;

	}
}


void display()
{
	if (top >= 0)
	{
		cout << "Stack elements are:";
		for (int i = top; i >= 0; i--)
			cout << stack[i] << " ";
		cout << endl;
	}
	else
		cout << "Stack is empty";
}

int main()
{
	int ch, val;
	cout << "1) Push in stack" << endl;
	cout << "2) Pop from stack" << endl;
	cout << "3) Check if stack is full" << endl;
	cout << "4) Check if stack is empty" << endl;
	cout << "5) Printing even numbers" << endl;
	cout << "6) Poping elements" << endl;
	cout << "7) Display stack" << endl;
	cout << "8) Exit" << endl;
	do
	{
		cout << "Enter choice: " << endl;
		cin >> ch;
		switch (ch) {
		case 1: {
			cout << "Enter value to be pushed:" << endl;
			cin >> val;
			push(val);
			break;
		}
		case 2: {
			pop();
			break;
		}

		case 3: {

			IsFull();
			break;
		}
		case 4: {
			IsEmpty();
			break;

		}

		case 5: {
			Even();
			break;
		}
		case 6: {
			  Popelement();
			  break;
		}
		case 7: {
			display();
			break;
		}
		case 8: {
			cout << "Exit" << endl;
			break;
		}
		default: {
			cout << "Invalid Choice" << endl;
		}
		}
	} while (ch != 8);
	return 0;
}