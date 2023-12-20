// Create a class named distance with data members feet and inch. Initialize all data members using constructors and use necessary member functions to add two distances and display the result in main().
#include<iostream>
#include<conio.h>
using namespace std;
class dist
{
    private:
    int ft,inch;
    public:
    dist()
    {
        ft=0;
        inch=0;
    }
    dist(int ft1,int inch1)
    {
        ft=ft1;
        inch=inch1;
    }

    dist add(dist d1,dist d2)
    {
        dist d3;
        d3.inch=d1.inch+d2.inch;
        d3.ft=d1.ft+d2.ft+d3.inch/12;
        d3.inch=d3.inch%12;
        return(d3);

    }
    void display()
    {
        cout<<"Feet="<<ft<<endl<<"inch="<<inch<<endl;

    }
};
int main()
{
    dist d4(1,24),d5(2,12),d6;
    d6=d6.add(d4,d5);
    d6.display();
    getch();
    return 0;
}