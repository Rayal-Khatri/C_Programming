#include<iostream>
using namespace std;

class complex
{
private:
    int real;
    int imaginary;
public:
complex()
    {
        real = 0;
        imaginary=0;
    }
    complex(int r,int i)
    {
        real = r;
        imaginary=i;
    }
    void print()
    {
        cout<<"The imaginary number is: "<< real<<" + "<<imaginary<<"i";
    }
    //operator overloading syntax
    complex operator +(complex c)
    {
        complex temp;
        temp.real=real+c.real;
        temp.imaginary=imaginary +c.imaginary;
        return temp;
    }
};
int main()
{
    complex c1(2,3);
    complex c2(3,4);
    complex c3;
    c3=c1+c2;
    c3.print();//c3= c1.add(c2) 
    return 0;

}
