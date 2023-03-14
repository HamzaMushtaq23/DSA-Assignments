
//Write C++ program to change string to lower case without strlwr

#include <iostream>
#include <cstring>

using namespace std;

void toLowerCase(char str[])
{
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }
}

int main()
{
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    toLowerCase(str);
    cout << "String in lowercase: " << str << endl;
    return 0;
}
