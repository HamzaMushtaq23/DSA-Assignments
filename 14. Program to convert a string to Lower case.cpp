
//Write C++ program to convert a string to Lower case

#include <iostream>
#include <cctype> // for tolower
#include <string>
using namespace std;
int main()
{
    string str = "HAMZA";

    for (size_t i = 0; i < str.length(); ++i) {
        str[i] = tolower(str[i]);
    }

   cout << "Lower case string is: " << str << endl;

    return 0;
}


