#include<iostream>
using namespace std;
class point
{
    private:
        int a,b;
    public:
        point(int x1,int y1)
        {
            a=x1;
            b=y1;
        }
    int getx()
    {
        return a;
    }
    int gety()
    {
        return b;
    }
};
int main ()
{
    point p1(10,4);
    cout << "p1.a = " << p1.getx() << " \np1.b = " << p1.gety() << endl;
    return 0;
}



