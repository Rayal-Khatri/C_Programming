#include <iostream>
using namespace std;

int main()
    {
        //Q. Program to print positive number entered by the user.
        int a;
        cout << "Enter a number: ";
        cin >> a;
        if (a>0)
            {
                cout << "\n The entered  positive number is "<< a;
            }
        else
            {
                cout << "\n Please enter a positive non zero number";
            }
        return 0;
    }