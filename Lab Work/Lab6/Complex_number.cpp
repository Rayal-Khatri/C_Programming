#include<iostream>
using namespace std;

class Compnum
{
    private:
    int real, imaginary;

    public:
    Compnum(){
        }
    Compnum(int r,int i)
    {
        real = r;
        imaginary=i;
    }
    void display()
    {
        cout << "\n Complex number is: " << real << " + "<< imaginary<<"i"<<endl;
    }
    int getreal()
    {
        return real; //to give real number value to outside the class
    }
    int getimag()
    {
        return imaginary; //to give imaginary number value to outside the class
    }
};
Compnum Add(Compnum n1,Compnum n2)
    {
        int r,i;
        //r=n1.real+n2.real doesnt work because real is a private variable
        r=n1.getreal()+n2.getreal();
        i=n1.getimag()+n2.getimag();
        Compnum temp(r,i); //creating a Complexnum data type variable to return value
        return temp;
    }

int main()
{
    Compnum n1(3,4),n2(4,5),n3;
    n1.display();
    n2.display();
    cout<< "\n Now Adding";
    n3=Add(n1,n2);
    n3.display();
    Compnum *ptr; // as the pointer contains the complex number value ..we need to make its daya type same as well
    cout<<"\n Using pointers to siplay the values";
    ptr = &n3; // giving the address of n3 to the pointer ptr 
    ptr ->display(); //displaying the complex number value in the ptr
    ptr=&n1;
    ptr-> display(); //chekcing if the pointer actually works
    return 0;
}
