#include<conio.h>
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char ch;
    ifstream a;
    a.open("resume.txt");
    while(!a.eof())
    {
        a.get(ch);
        cout<<ch;

    }
    a.close();
    getch();
}
