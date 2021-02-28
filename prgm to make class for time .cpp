
#include<conio.h>
#include<iostream>

using namespace std;
class time{
int H,M,S;
public:

    void set_time(int h,int m,int s)
    {
        H=h;
        M=m;
        S=s;
    }
    void show()
    {
        cout<<H<<":"<<M<<":"<<S<<endl;
    }
    void normal()
    {
        M=M+S/60;
        S=S%60;
        H=H+M/60;
        M=M%60;

    }
};

int main()
{
    int a,b,c;
    cout<<"enter time in hour,min,sec";
    cin>>a>>b>>c;
    time t;
    t.set_time(a,b,c);
    t.show();
    t.normal();
    t.show();
    getch();


        }
