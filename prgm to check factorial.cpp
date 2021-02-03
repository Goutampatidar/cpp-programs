
#include<iostream>
#include<conio.h>

using namespace std;
int fact(int a)
{
if(a==1)
return 1;
return (a*fact(a-1));
}
int main ()
{
     int i,a;
     cout<<"enter any no. to find factorial";
     cin>>a;
    
    cout<<"factorial of the given no. is "<<fact(a);
    getch();
}
