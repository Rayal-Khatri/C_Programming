#include <iostream>
#include<string.h>
using namespace std;
//WAP to illustrate strrev() function
void add(int a,double b)
    {
        //int a,b,c;
        float s;
        s=a+b;
        cout <<"The sum is (Q3)"<<s<<endl;
   }
void add(int a,int b)
    {
        //int a,b,
        int s;
        s=a+b;
        cout <<"The sum is (Q1) "<<s<<endl;
   }
void add(double a,int b,double c)
    {
        //float a,b,
        double s;
        s=a+b;
        cout <<"The sum is (Q2) "<<s<<endl;
   }
int main()
{
   add(2,3.5);
   add(1,2);
   add(0.5,3,14.3);
   return 0;
}
