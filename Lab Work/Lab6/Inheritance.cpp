#include<iostream>
using namespace std;

class Shape
{
    protected:
        int width;
        int height;
    public:
    void setwidth(int w)
    {
       width=w;
    }
    void setheight(int h)
    {
        height=h;
    }
};
class Rectangle:public Shape
{
        public:
        int getArea()
        {
            return(width*height);
        }
};

int main()
{
    Rectangle rect;
    rect.setwidth(2);
    rect.setheight(11);
    cout<<"Total are is "<< rect.getArea()<<endl;
    return 0;
}