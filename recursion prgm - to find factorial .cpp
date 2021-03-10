#include<conio.h>
#include<iostream>

using namespace std;
int fact(int);

int main()
{
    int a,c;
    cout<<"enter any no.";
    cin>>a;

 c=fact(a);
 cout<<"factorial="<<c;

    getch();
}
int fact(int a)
{
    int b;
    if(a==1)
    {
        return(1);
    }
b=a*fact(a-1);
return(b);
}
