#include <iostream>
using namespace std;

class employee
{
    private:
        char  name[10];
        int   ID;
        int   Salary;
    public:
        void input(void);
        void display(void);
};

void employee::input(void)
{
    cout << "Enter name: " ;
    cin >> name;
    cout << "Enter ID: ";
    cin >> ID;
    cout << "Enter Salary: ";
    cin >> Salary;

}

void employee::display(void)
{
    cout << "Employee details:\n";
    cout << "Name:"<< name << ",ID:" << ID << ",Salary:" << Salary ;
}

int main()
{
    employee emp[4];
    int n=5,i;

    for(i=0;i< n; i++)
    {
        cout << "Enter details of employees " << i+1 << endl;
        emp[i].input();
    }

    for(i=0;i< n; i++){
        cout << "\nDetails of employees " << (i+1) << ":\n";
        emp[i].display();
    }

    return 0;
}
