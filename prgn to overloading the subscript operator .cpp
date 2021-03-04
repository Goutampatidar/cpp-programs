#include<conio.h>
#include<iostream>

using namespace std;

class array
{

    int a[10];
public:
    void set( int ind, int b)
    {
        a[ind]=b;

    }
    int operator[](int i)

    {
        int b;
        b=a[i];
        return(b);
    }
};
int main()
{
    int i;
    array x;
    for(i=0; i<=10; i++)
    {
        x.set(i,(i*10));
    }
    for(i=0; i<10; i++)
    {
        cout<<" "<< x[i];
    }
}
