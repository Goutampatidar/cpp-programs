#include<conio.h>
#include<iostream>

using namespace std;
int check(int);
int main()
{
    int a,b=0,i,c;
    cout<<"enter any no.";
    cin>>a;
    c=a;
    for(i=1;b==0;i++){
    b=check(a);
    if(b==0)
    {
        a++;
    }
    if(i==1){
        b=0;
        a++;
    }
    }
    cout<<b<<"is a prime no.greator than "<<c;
    getch();
}
int check(int a)
{
    int i;
    for(i=2; i<a; i++)
    {
        if(a%i==0)
        {
            return(0);
        }
    }
    if(a==i)
    {
return(a);
}
}

