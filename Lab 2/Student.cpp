#include <iostream>
using namespace std;

struct student
{
    char name[50], address[50];
    int roll;
}s;

int main()
{
    cout << "Enter name: ";
    cin >> s.name;
    cout << "Enter roll number: ";
    cin >> s.roll;
    cout << "Enter address: ";
    cin >> s.address;

    cout << "\n Output" << endl;
    cout << "Name: " << s.name << endl;
    cout << "Roll: " << s.roll << endl;
    cout << "Address: " << s.address << endl;
    return 0;
}
