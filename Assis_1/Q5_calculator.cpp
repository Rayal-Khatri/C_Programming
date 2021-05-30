#include <iostream>
using namespace std;

int main()
    {
        //Q. Program to build a simple calculator using switch Statement
        int a,x,y,z;
        cout << "Main Menu: \n 1. Addition \n 2. Subtraction\n 3. Multiplication\n 4. Division ";
        cout << "\n Select from options: ";
        cin >> a;
        cout << "Enter 1st number: ";
        cin >> x;
        cout << "Enter 2nd number: :";
        cin >> y;
        switch(a)
        {
                case 1:
                {
                    z=x+y;
                    cout << "The Sum of two numbers is "  << z;
                    break;
                }
                case 2:
                {
                    z=x-y;
                    cout << "The Difference of two numbers is "  << z;
                    break;
                }case 3:
                {
                    z=x*y;
                    cout << "The Product of two numbers is "  << z;
                    break;
                }case 4:
                {
                    z=x/y;
                    cout << "The answer is "  << z ;
                    break;
                }
                default:
                {

                    cout << "Invalid Input " ;
                    break;
                }
        }
        return 0;
    }
