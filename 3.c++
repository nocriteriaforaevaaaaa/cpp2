//Create a class named time with data members second, minute, hour, and day. Initialize all the data members using constructors and use necessary member functions to add two times and display the result in main().
#include<iostream>
#include<conio.h>
using namespace std;
class Time
{
    private:
    int sec,min,hr,day;
    public:
    Time()
    {
        sec=0;
        min=0;
        hr=0;
        day=0;
    } 
    Time(int sec1,int min1,int day1,int hr1)
    {
        sec=sec1;
        min=min1;
        hr=hr1;
        day=day1;
    }
    Time calc(Time t1,Time t2)
    {
        Time t3;
        t3.sec=t1.sec+t2.sec;
        t3.min=t1.min+t2.min+t3.sec/60;
        t3.sec=t3.sec%60;
        t3.hr=t1.hr+t2.hr+t3.min/60;
        t3.min=t3.min%60;
        t3.day=t1.day+t2.day+t3.hr/24;
        t3.hr=t3.hr%24;
        return t3;
    }
    void display()
    {
        cout<<"Days="<<day<<endl<<"Hours="<<hr<<endl<<"Minutes="<<min<<endl<<"Seconds="<<sec<<endl;
        
    }
};
int main()
{
    Time t4(60,60,2,1),t5(120,120,1,2),t6;
    t6=t6.calc(t4,t5);
    t6.display();
    getch();
    return 0;
}