
//Write C++ program to convert a string to uper case


#include <iostream>
#include <cstring>

using namespace std;

void toUpperCase(char str[])
{
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
}

int main()
{
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    toUpperCase(str);
    cout << "String in uppercase: " << str << endl;
    return 0;
}
