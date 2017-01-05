#include<bits/stdc++.h>
using namespace std;

int arr[50];
int i,ans,T,n;

int main()
{
    cin>>T;
    arr[0]=1;
    arr[1]=3;
    arr[2]=4;
    for(i=3; i<=44; i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    while(T--)
    {
        cin>>n;
        cout<<arr[n-1]<<endl;
    }
    return 0;
}
