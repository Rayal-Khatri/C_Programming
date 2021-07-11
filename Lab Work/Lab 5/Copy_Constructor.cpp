#include<iostream>
#include<string>
using namespace std;
class cars
{
private:
string comp_name;
string model_name;
string fuel_name;
float milage;
float price;


public:
//Default Constructor 
cars()
    {
        cout<< "Default Constructor is called\n";
    }
    //parameterized constructor 
cars(string cname, string mname, string ftype, float m,float p)
    {
        model_name = mname;
        comp_name = cname;
        fuel_name = ftype;
        milage = m;
        price = p;
    }
cars(cars &obj) //passing object of the same class &obj means reference to the object is passed
    {
        cout<<"Copy Constructor is called\n";
        model_name = obj.model_name;
        comp_name = obj.comp_name;
        fuel_name = obj.fuel_name;
        milage = obj.milage;
        price = obj.price;
    }
void setdata(string cname, string mname, string ftype, float m,float p)
    {
        comp_name = cname;
        model_name = mname;
        fuel_name = ftype;
        milage = m;
        price = p;
    }
void display()
    {   cout<<"**************************"<<endl;
        cout << model_name <<" :" << endl << endl;
        cout << "Company : "<< comp_name << endl;
        cout << "Fuel used : "<< fuel_name << endl;
        cout << "Milage : "<< milage << endl;
        cout << "Price : "<< price << endl;
    }
};

 int main()
    {
        cars c1,c2("toyota","Fortuner","Diseal", 20,120000); 
        c1.setdata("Random","Rcar","petrol",15,120000);
        c1.display();
        c2.display();
        cars c3=c1; //calling copy constructor which copies data from c1
        c3.display();
        return 0;
    }
