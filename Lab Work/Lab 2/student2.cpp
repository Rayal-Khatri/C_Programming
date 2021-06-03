#include <iostream>
using namespace std;

struct student
{
    char name[50], address[50], roll[10];
}s[3];

int main()
{
    int i=0;
    for(i=0; i<3;i++)
     {
         cout<< i+1 <<". "<<endl;
    cout << "Enter name: ";
    cin >> s[i].name;
    cout << "Enter roll number: ";
    cin >> s[i].roll;
    cout << "Enter address: ";
    cin >> s[i].address;
     }

    cout << "\n Output" << endl;
    for(i=0; i<3;i++)
     {
    cout << "S.N :" << i+1 << endl;
    cout << "Name: " << s[i].name << endl;
    cout << "Roll: " << s[i].roll << endl;
    cout << "Address: " << s[i].address << endl;
    cout << "**********************" <<endl;
     }
    return 0;
}
