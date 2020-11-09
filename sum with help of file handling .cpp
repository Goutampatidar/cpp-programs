#include<conio.h>
#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream a;
    a.open("sum.txt");
    a<<"a=5 \nb=5";
    a.close();
    getch();
    ifstream b;
    b.open("sum.txt");
    char c[2],d[2];
    b.get(c);
    b.get(d);
    cout<<c<<"\n"<<d;
    b.close();
    getch();

}

