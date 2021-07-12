#include<iostream>
using namespace std;
 class base
 {
     public:
        virtual void msg() //if virtual wasnt declared then the pointer would have called this function isntead of the derived function as the pointer's datatype is base
        {
            cout<<"\n This message is from Base class "; //this message is displayed when the address of object of the base class is given 
        }
 };
 class derived : public base
 {
     void msg()
     {
         cout<<"\n This message is from Derived class"; //here because the base function had virtual function this message was displayed instead
     }
 };
 void display(base *obj) //*obj refers to the adress of the on=bject
 {
     obj->msg(); //using this single function iam refering to every function in class....thus use of virtual function
 }
 int main()
 {
     base *ptr,b1;
     derived d1;
     ptr=&d1;
     display(ptr);
     ptr=&b1;
     display(ptr);
    return 0;
}