#include <iostream>
using namespace std;

int main()
    {
        //Q. C++ program to find the sum of first n natural numbers.
        int i,s=0,n;
        cout<< "Enter a number";
        cin >> n;
        for(i=0;i<=n;i++)
        {
           s=s+i;
        }
        cout<< "the sum of first " << n << " Natural Number is "<<s;
        return 0;
    }
