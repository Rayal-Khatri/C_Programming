#include<iostream>
#include<string>
using namespace std;
class cars
{
private: //contains data that only functions inslide class can access
string comp_name;
string model_name;
string fuel_name;
float milage;
float price;


public: //contains data that can be accessed by the main function
void setdata(string cname, string mname, string ftype, float m,float p)
    {
            //assisgning values to private variables
        comp_name = cname;
        model_name = mname;
        fuel_name = ftype;
        milage = m;
        price = p;
    }
void display()
    {   // displays data for corespondiog object
        cout << model_name <<" :" << endl << endl;
        cout << "Company : "<< comp_name << endl;
        cout << "Fuel used : "<< fuel_name << endl;
        cout << "Milage : "<< milage << endl;
        cout << "Price : "<< price << endl;
    }
};

 int main()
    {
        cars c1; //creating object C1
        c1.setdata("Toyota","Altis","Petrol",25,350000);  //calling a public function
        c1.display();
        return 0;
    }
