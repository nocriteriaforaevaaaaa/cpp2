// Create a class named complex with data members real and imaginary. Initialize all the data members using constructors and use necessary member functions to add two complex numbers and display the result in main().
#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
    private:
      int real,img;
    public:
    complex()
    {
        real=0;
        img=0;
    }
    complex(int real1,int img1 )
    {
        real=real1;
        img=img1;
    }
    complex add(complex c1,complex c2)
    {
        complex c3;
        c3.real=c1.real+c2.real;
        c3.img=c1.img+c2.img;
        return(c3);
    }
    void display()
    {
        cout<<"Real="<<real<<endl<<"Imaginary="<<img<<endl;
    }
};
int main()
{
    complex c4(2,3),c5(4,5),c6;
    c6=c6.add(c4,c5);
    c6.display();
    getch();
    return 0;
}