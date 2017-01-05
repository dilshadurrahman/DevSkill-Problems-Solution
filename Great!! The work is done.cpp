#include<bits/stdc++.h>
using namespace std;

float h,member[101],sum,ans;
int n;

int main()
{

    while(cin>>h>>n)
    {

       sum=0;
       for(int i=0; i<n; i++)
       {
           cin>>member[i];
           sum+=member[i];
       }
       ans=ceil(h/sum);
       if(ans==1)
       {
           cout<<"Project will finish within "<<ans<<" day."<<endl;
       }
       else
       {
           cout<<"Project will finish within "<<ans<<" days."<<endl;
       }

    }



    return 0;


}
