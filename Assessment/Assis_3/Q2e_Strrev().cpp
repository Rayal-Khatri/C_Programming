#include <iostream>
#include<string.h>
using namespace std;
//WAP to illustrate strrev() function
int main()
{
   char a[50];
   cout <<"Enter a string: ";
   cin >> a;
   cout << "String before reversing is "<<a<<endl;
   cout <<"String after reversing is " <<strrev(a);
   return 0;
}
