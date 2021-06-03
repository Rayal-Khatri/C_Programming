#include <iostream>
#include<string.h>
using namespace std;
    //WAP to find out the length of string taking input from user using standard library function
int main()
    {
    char a[10];
    cout << "Enter a string \n";
    cin >> a;
    //getline(cin,a[10]);
    cout << "\n The string has "<< strlen(a) << " characters";
    //cout << "\n The string has "<< a.length() << " characters";
    return 0;
    }

