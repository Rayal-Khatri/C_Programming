# include <iostream>
using namespace std;
    //WAP to compute area of triangle using arguments but no return type
void area (float,float);

int main()
    {
    float b,h;
    cout << "Enter base of the triangle: ";
    cin >> b;
    cout << "Enter height of the triangle: ";
    cin >> h;
    area(b,h);
    return 0;
    }

void area (float b,float h)
    {
        float a;
        a=0.5*b*h;
        cout << "The area of triangle is: "<< a;
    }
