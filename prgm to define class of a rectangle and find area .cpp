
#include<conio.h>
#include<iostream>


using namespace std;

class rectangle
{
    int l,b,area;
public:
    void set_data(int a, int c)

    {
        l=a;
        b=c;
    }
    void show()
    {
        cout<<"area of rectanngle ="<<area;

    }
    void cal()
    {
        area=l*b;
    }
};
int main()
{
    rectangle r1;
    r1.set_data(5,5);
    r1.cal();
    r1.show();
    getch();
}
