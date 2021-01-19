#include<conio.h>
#include<iostream>
using namespace std;
struct student
{
    char a[20];
    int  roll,standard,marks;
    long long contact;

};
struct student input (void);
void show (student);

int main()
{
    struct  student s1;
    s1=input();
    show(s1);
    getch();
}
struct student input()
{struct student s;
    cout<<"enter student name";
    cin>>s.a;
    cout<<"enter roll no. ";
    cin>>s.roll;
    cout<<"enter class";
    cin>>s.standard;
    cout<<"enter marks of previous exam";
    cin>>s.marks;
    cout<<"parents contact no.";
    cin>>s.contact;
return(s);
}
void show(struct student s)
{
    cout<<"\nname"<<s.a;
    cout<<"\nroll. no"<<s.roll;
    cout<<"\nclass"<<s.standard;
    cout<<"\nmarks in previous exam"<<s.marks;
    cout<<"\nparents contact no."<<s.contact;
}
