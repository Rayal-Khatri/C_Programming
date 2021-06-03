# include <iostream>
using namespace std;
    //WAP to compute area of triangle using no arguments and no return type 
void area ();

int main()
    {
    area();
    return 0;
    }

void area ()
    {
    float b,h;
    cout << "Enter base of the triangle: ";
        cin >> b;
    cout << "Enter height of the triangle: ";
    cin >> h;
    float a;
    a=0.5*b*h;
    cout << "The area of triangle is: "<< a;
    }
