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
//Default Constructor for C1
cars()
    {
        comp_name = "Toyota";
    }
    //parameterized constructor for C2
cars(string mname, string ftype, float m,float p)
    {
        model_name = mname;
        fuel_name = ftype;
        milage = m;
        price = p;
    }
/*void setdata(string cname, string mname, string ftype, float m,float p)
    {
        comp_name = cname;
        model_name = mname;
        fuel_name = ftype;
        milage = m;
        price = p;
    }*/
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
        cars c1,c2("Fortuner","Diseal", 20,120000); //everutime a object is created constructor is automatically called 
        c1.display();//default constructor is called as it has no other value but the company name
        c2.display();//cparameterized constructor is called as it doesnt have company name
        return 0;
    }
