#include<bits/stdc++.h>
using namespace std;
int T,b1,b2,p1,p2,c=0,s;

int main()
{
    cin>>T;
    while(T--)
    {
        s=0;
        for(int i=0; i<2; i++)
        {
            cin>>b1>>b2>>p1>>p2;
            if((b1+b2)>(p1+p2))
                s++;
        }
        if(s==2)
        {
            cout<<"Banglawash"<<endl;
        }
        else
        {
            cout<<"Miss"<<endl;
        }
    }
        return 0;
}
