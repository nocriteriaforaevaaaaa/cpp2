//WAP to illustrate the concept of different types of constructor.
#include<iostream>
#include<conio.h>
using namespace std;
class constructor
{
    private:
    int x,y;
    public:
    constructor()
    {
        x=0;
        y=0;
    }
    constructor(int x1,int y1)
    {
        x=x1;
        y=y1;
    }
    constructor(constructor&c)
    {
        x=c.x;
        y=c.y;
    }
    void display()
    {
        cout<<"X="<<x<<endl<<"Y="<<y<<endl;
    }
};
int main()
{
    constructor c1; //Default constructor is called
    c1.display();
    constructor c2(10,20);//Parameterized Constructor is called
    c2.display();
    constructor c3(c1); //Copy constructor is called and the value of default constructor is copied
    c3.display();
    getch();
    return 0;
}
