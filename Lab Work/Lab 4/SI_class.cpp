#include<iostream>
using namespace std;

class simpleinterest
{
 private:
     float p,t,r,i,a;
     char x;

 public:
    void input()
          {
                 cout <<" Enter Principle Amount: ";
                 cin>>p ;
                 cout <<"\n Enter Number of years: ";
                 cin>>t;
                 here:
                 cout<<"\n Do you want to enter rate(y/n)";
                 cin>>x;
                 if(x=='y')
                 {
                 cout<<"\n Enter Rate of Interest: ";
                 cin>>r;
                 }
                 else if (x=='n')
                 {
                     r=15;
                 }
                 else
                 {
                 cout<<"Please enter a valid answer";
                    goto here;
                 }
                 i= (p*t*r)/100;
                 a = i + p;

          }

    void display( )
         {
                cout<<"\n Entered Details are :: \n";
                cout<<"\n Principle Amount: "<<p;
                cout <<"\n\n Rate of Interest: "<<r;
                cout <<"\n\n Number of years: "<<t;
                cout <<"\n\n Interest : "<<i;
                cout <<"\n\n Total Amount : "<<a<<"\n";
         }
};


int main ()
{
    simpleinterest i;

    i.input();
    i.display();

    return 0;
}
