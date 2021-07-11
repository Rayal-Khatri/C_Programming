#include<iostream>
using namespace std;
//Base Class
 class bassc
 {
 protected:
    int y; //can only be accessed by the child function
 private:
    int z; //cant be accessed outside the class
 public:
    int x; //can be accessed from anywhere
    bassc() //Constructor to assign values 
    {
        x=3;
        y=4;
        z=5;
    }
    void display()
    {
        cout<< "\n Inside bass class x: "<< x<<" Y:"<<y<<" z: "<<z<<endl; //chek to see if we can access values inside the class
    }
 };
 //derived class 
 class derive: public bassc //here public is used. protected or private also can be used as required our need
 {
 public:
     void display()
     {
         //Altho this is a child class, this cant access the private values in the main class...so value of z cant be displayed
        cout<< "\n Inside derived class x: "<< x<<" Y:"<<y<<endl;
        
     }
 };
 int main()
 {
     derive d1;
     d1.display();
     bassc b1;
     b1.display();
     cout<<"\n Inside Main function x: "<<d1.x<<endl;/*
        here the derived class is public so the data is also public hence it is accessable in main function
        public x remains public x
        protected y remains protected y 
        however if the derived class was designed as protected the data would also be changed to protected i.e
        private x becomes protected 
        protected y becomes protected
        Similarly if the derived class was made private the data would also become private i.e
        public x becomes private x 
        protected y becomes private y
        */
 }
