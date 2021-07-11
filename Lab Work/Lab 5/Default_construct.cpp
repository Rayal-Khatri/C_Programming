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
//member functions
cars()
    {
        cout <<"**************"<<endl; //to chek constructor is called or not
        comp_name = "Toyota";
        model_name = "Atlas";
        fuel_name = "Petrol";
        milage = 24;
        price = 350000;
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
    {  
        cout << model_name <<" :" << endl << endl;
        cout << "Company : "<< comp_name << endl;
        cout << "Fuel used : "<< fuel_name << endl;
        cout << "Milage : "<< milage << endl;
        cout << "Price : "<< price << endl;
    }
};

 int main()
    {
        cars c1,c2; //everutime a object is created constructor is automatically called
       // c1.setdata("Toyota","Altis","Petrol",25,350000);  
        c1.display();//constructor gives given value if specified else some random value
        c2.display();//constructor gives same value to it
        return 0;
    }
