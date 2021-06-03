# include <iostream>
using namespace std;
    //WAP to compute area of triangle using arguments and return type
float area (float,float);

int main()
    {
    float b,h;
    cout << "Enter base of the triangle: ";
    cin >> b;
    cout << "Enter height of the triangle: ";
    cin >> h;
    cout << "The area of triangle is: "<< area (b,h);
    return 0;
    }

float area (float b,float h)
    {
        float a;
         a=0.5*b*h;
        return (a);
    }
