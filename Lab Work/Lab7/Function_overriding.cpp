#include<iostream>
using namespace std;

class base
{
    public:
    void message()
    {
        cout<<"This message is from base class.\n"; //this message is displayed when base class is called
    }
};

class derive : public base
{
    public:
    void message() //this function has the same name as the base function
    {
        cout<<"This message is from derived class.\n";
        base::message(); // this is used to call the base function if needed
    }
};
int main()
{
    base b1;
    b1.message(); //here simply the message funtion is called in the base class
    derive d;
    d.message();//here instead of calling the function in the bass class  the function in the derived is called instead..hence the function in derived class is iverriding the base function 
}