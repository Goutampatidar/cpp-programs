#include<conio.h>
#include<iostream>

using namespace std;
class person
{
    string a;
    int age;
public:
    void set ( string x,int y)
    {
        a=x;
        age=y;
    }
    void out()
    {
        cout<<"\n age "<<age<<"\n institute name- "<<a;
    }

};
class student:public person
{
string c;
long long mob;
public:
    void input( string z, long long m)
    {
        c=z;
        mob=m;
    }
void show ()
    {cout<<"student data  \n"<<" name- "<<c<<"\n mob no- "<<mob<<" ";
        out();

    }
};
int main()
{
    student s;
    s.input("goutam",7415186050);
    s.set("buit",19);
    s.show();
    getch();
}
