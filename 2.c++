//WAP to illustrate the concept of destructor.

#include<iostream>
// #include<conio.h>
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
    ~constructor()
    {
        cout<<"The object value is destroyed"<<endl;
        
    }

};

int main()
{
    constructor c1; 
    c1.display();
    constructor c2(10,20);
    c2.display();
    constructor c3(c1); 
    c3.display();
    // getch();
    return 0;
}
