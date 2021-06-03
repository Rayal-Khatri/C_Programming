#include <iostream>
#include<string.h>
using namespace std;
  //d.WAP to illustrate the use of strcmp() functione.
int main()
{

    char a[10],b[10];
    cout <<"Enter a string: ";
    cin >> a;
    cout <<"Enter another string: ";
    cin >> b;
    // Using strcmp()
    int c = strcmp(a, b);
    if (c==0)
    {
        printf("Strings are same");
    }
    else
    {
        printf("Strings are not same");
    }

   cout << " \nThe value returned by strcmp() is " << c;
    return 0;
}
