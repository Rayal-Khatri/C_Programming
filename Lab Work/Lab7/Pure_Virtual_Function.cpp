#include<iostream>
using namespace std;
class shape
{
    public:
    virtual void getA()=0; //This is pure virtual as altho it is declared it doesnt perfome anything and is used to access the derived function
};
class Rect:public shape
{
    public:
    void getA()//OVERRIDING
    {
        int l,b;
        cout<<"\nEnter length and breadth";
        cin>>l;
        cin>>b;
        cout<<"\n The area of given rectangle is: "<< (l*b);
    }
};
class Cir:public shape
{
    public:
    void getA()//make sure to have similar syntax as the orginal function...cant use parameters here as it wont be overriding anymore
    {
        int r;
        cout<<"\nEnter radious of circle";
        cin>>r;
        cout<<"\n The area of given Circle is: "<< (3.14*r*r);
    }

};
int main()
{
    Rect R1;
    R1.getA();
    Cir C1;
    C1.getA();
    return 0;
}