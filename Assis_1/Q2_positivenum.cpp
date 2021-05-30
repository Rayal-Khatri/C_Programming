#include <iostream>
using namespace std;

int main()
    {

        //Q. Program to check whether an integer is positive or negative
        int a;
        cout << "Enter a number: ";
        cin >> a;
        if(a>0)
        {
            cout << endl << a << " is a positive number.";
        }
        else 
        {
            cout << a << " is negative ";
        }
        return 0;
    }
