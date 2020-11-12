#include<conio.h>
#include<iostream>
#define pi 3.14
using namespace std;
class a{

    int a,b;
    float r;
    int area;
    float Area;
    public:

    void set_data(int p,int q)
    {
       a=p;
       b=q;
       area=a*b;
    }
        void set_data(float R)
    {
       r=R;
         Area=pi*r*r;
    }

    void show_rec()
    {

        cout<<"area of rectangle  "<<area<<endl;

    }
     void show()
    {


        cout<<"area of circle  "<<Area<<endl;
    }


};

int main()

{
    a a1,a2;
a1.set_data(5,2);

a1.show_rec();

    a2.set_data(6);

    a2.show();
    getch();
    }
