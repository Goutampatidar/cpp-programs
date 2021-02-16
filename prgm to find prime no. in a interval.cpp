#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,i,j;
    cout<<"ENTER THE INTERVAL ";
    cin>>a>>b;
    for(i=a; i<=b; i++)
    {
        for(j=2; j<=(i-1); j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
         if(i==1)
        {
            cout<<""<<i<<" ";
        }

        if(j==i)
        {
            cout<<""<<i<<" ";
        }
    }


}
