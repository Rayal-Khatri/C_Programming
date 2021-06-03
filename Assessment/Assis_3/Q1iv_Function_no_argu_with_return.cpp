# include <iostream>
using namespace std;
    //WAP to compute area of triangle using no arguments but has return type
float area ();

int main()
    {
    cout << area() << "sq unit is the area of triangle ";
    return 0;
    }

float area ()
    {
    float b,h;
    cout << "Enter base of the triangle: ";
    cin >> b;
    cout << "Enter height of the triangle: ";
    cin >> h;
    float a;
    a=0.5*b*h;
    return(a);
    }
