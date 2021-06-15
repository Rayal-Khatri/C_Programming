#include <iostream>
using namespace std;

#define MAX 10
 //WAP to define a class in C++ as shown : class name - Student attributes - name, roll, address, percentage methods - input(), display()
class student
    {
    private:
        char  name[30];
        int   rollNo;
        float total;
        float perc;
    public:
        void input(void);
        void display(void);
    };

void student::input(void)
    {
    cout << "Enter name: " ;
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter total marks outof 300: ";
    cin >> total;
    perc=total/300*100;
    }

void student::display(void)
{
        cout << "Name:"<< name << "\t Roll Number:" << rollNo << "\t Total:" << total << "\t Percentage:" << perc;
}

int main()
{
    student std[100];
    int n,i;

    cout << "Enter total number of students: ";
    cin >> n;

    for(i=0;i< n; i++)
    {
        cout << "Enter details of student " << i+1 << ":\n";
        std[i].input();
    }

    cout << endl;

    for(i=0;i< n; i++)
    {
        cout << "\nDetails of student " << (i+1) << ":\n";
        std[i].display();
    }

    return 0;
}
