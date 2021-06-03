#include <iostream>
using namespace std;

int main()
    {

        //Q. Program to check whether an integer is positive or negative or zero.
        int a;
        cout << "Enter a number: ";
        cin >> a;
        if(a>0)
        {
            cout << endl << a << " is a positive number.";
        }
        else if (a<0)
        {
            cout << a << " is negative ";
        }
        else
        {
            cout << a << " is zero";
        }
        return 0;
    }
