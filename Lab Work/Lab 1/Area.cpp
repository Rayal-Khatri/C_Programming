#include<iostream>
#include<math.h>
using namespace std;
void M1();
void M2();
//Area of triangle
    int main()
    {   
        /* int a;
        cout << "Choose Method 1 or 2";
        cin >> a;
        if (a == 1)
        {
            M1();
        }
        else
        {
            M2();
        }
        return 0;
    }

    
void M1()
    {
        int a,b,c,s,area,x;
        cout << "\n Enter 1st side \n";
        cin >> a;
        cout << " Enter 2nd side\n";
        cin >> b;
        cout << " Enter 3rd side\n";
        cin >> c;
        s=(a+b+c)/2;
        cout << " \n The value of s is " << s <<endl ;
        x=s*(s-a)*(s-b)*(s-c);
        cout <<x ;
        area = pow(x,0.5);
        cout << "\n  The area is " << area;
        
        
    }

void M2()
    {
       double h,b,area;
        cout << "Enter height";
        cin >> h;
        cout << "Enter base";
        cin >> b;
        area = 0.5*b*h;
        cout << "\n The area is " << area;*/
        int x, sum=0;
        do
        {
            cin<<x;
            sum+=x;
            cout<<endl<<"ToTal ="<<sum;
        }while(1);
        
    }


    
