#include<conio.h>
#include<iostream>
#define pi 4/3*3.14
using namespace std;
class a{

    int a,b,c;
    float r;
    int volume;
    float vol;
    public:

    void set_data(int p,int q,int r)
    {
       a=p;
       b=q;
    c=r;
       volume=a*b*c;
    }
        void set_data(float R)
    {
       r=R;
         vol=pi*r*r*r;
    }

    void show_rec()
    {

        cout<<"volume of cuboid "<<volume<<endl;

    }
     void show()
    {


        cout<<"volume of sphere  "<<vol<<endl;
    }


};

int main()

{
    a a1,a2;
a1.set_data(5,2,5);

a1.show_rec();

    a2.set_data(6);

    a2.show();
    getch();
    }

