#include<conio.h>
#include<iostream>

using namespace std;
int main()

{
    int a,b,c,i;
    cout<<"enter two no. to find lcm";
    cin>>a>>b;
    (a>b)?c=b:c=a;
    for(i=1; i>0 ; i++)
    {
        if(c%a==0 && c%b==0)
        {
            cout<<"lcm ="<<c ;
            break;
        }
        else
        {
            c++;
        }

    }
    getch();
}
