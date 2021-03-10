#include<conio.h>
#include<iostream>
#include<fstream>
#include<cstdio>
using namespace std;

int main()
{
    ofstream a;
   a.open("resume.txt");
   a<<"name-goutam patidar \ncollege name- buit,bhopal \nfather's name- mr. kamal kishore patidar\nmother's name- mrs. sumitra patidar \nmob.no.-7415186050 \naddress- vill chhadawad,tarana,ujjain,(m.p.)\n ";
   a.close();
   getch();
}
