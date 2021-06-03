#include <iostream>
#include<string.h>
using namespace std;
//WAP to copy one string to another user using standardlibrary functioni
int main()
    {
    char a[10],b[10];
    cout << "Enter a string \n";
    cin >> a;
    //getline(cin,a[10]);
    strcpy(b,a);
    cout << "\n The string is "<< b;
    return 0;
    }

