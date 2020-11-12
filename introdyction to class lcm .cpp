#include<conio.h>
#include<iostream>


using namespace std;

class student
{
private:
    int a;
   char *c;
   string s1;
    long int b;
public:
  void  data( int x,char *c1,string z,  long int y)
{
    a=x;
  c=c1;
  s1=z;
   b=y;
}
 void showdata()
{
 cout<<a<<" "<<c<<" "<<s1<<" "<<b<<" "<<endl;
}
} ;


int main()
{
    student s;
s.data(12,"rahul","mahakal",1245869515);
    s.showdata();
    getch();
}
