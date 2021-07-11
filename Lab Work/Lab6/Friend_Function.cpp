#include<iostream>
using namespace std;

class value
{
private:
    int unit;
public:
    value()
    {
        unit = 2;
    }
    void display()
    {
        cout<< "\n\nThe Value stored is "<< unit;
    }
    friend void change(value &d); //declaring a friend dunction....the & parameters denotes pass by reference
};
void change(value &d)
{
    d.unit = d.unit+2; //not sure why using d.unit instead of only units ..the program doesnt run when using units 
}
int main()
    {
      value v1;
      v1.display();
      change(v1); //simply calling the function as it is not a part of the class
      v1.display();
    }
