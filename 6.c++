// Create a class named vector with necessary data members. Initialize all data members using constructors and use necessary member functions to calculate the sum of two vectors and display the result in main().
#include<iostream>
#include<conio.h>
using namespace std;
class vector
{
    private:
    int x,y;
    public:
    vector()
    {
        x=0;
        y=0;
    }
    vector(int x1,int y1)
    {
        x=x1;
        y=y1;
    }
    vector add(vector v1,vector v2)
    {
        vector v3;
        v3.x=v1.x+v2.x;
        v3.y=v1.y+v2.y;
        return(v3);
    }
    void display()
        {
            cout<<"X="<<x<<endl<<"Y="<<y<<endl;
        }
};
int main()
{
    vector v4(1,2),v5(2,3),v6;
    v6=v6.add(v4,v5);
    v6.display();
    getch();
    return 0;
}