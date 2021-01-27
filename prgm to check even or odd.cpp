
#include<conio.h>
#include<iostream>

using namespace std;

int main()

{
    int a;
    cout<<"enter no. to check";
    cin>>a;
    cout<<"a="<<a;
    if(a%2==0)
    {
        cout<<"\n given no. is even ";
    }
    else
    {
        cout<<"\n given no. is odd ";
    }

    getch();
}

