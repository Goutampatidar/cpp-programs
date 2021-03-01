#include<conio.h>
#include<iostream>

using namespace std;

int main()

{
    int a,b;
    cout<<"enter two no. to swap";
    cin>>a>>b;
    cout<<"a="<<a<<"\n b="<<b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"\nafter swapping \n a="<<a<<"\n b="<<b;
    getch();
}

