#include<bits/stdc++.h>
using namespace std;
int T,i,l;
string number,operatore;

int main()
{
    cin>>T;
    for(i=0; i<T; i++)
    {
        cin>>number;
        l=number.size();
        if(l==11)
        {
            if(number[2]=='6')
                operatore="Airtel";
            else if(number[2]=='7')
                operatore="Grameenphone";
            else if(number[2]=='8')
                operatore="Robi";
            else if(number[2]=='9')
                operatore="Banglalink";
            else if(number[2]=='5')
                operatore="Teletalk";
            else
                operatore="Citycell";

            while(number.length()<13)
            {
                number="8"+ number;
            }
        }
        if(l==13)
        {
                 if(number[4]=='6')
                operatore="Airtel";
            else if(number[4]=='7')
                operatore="Grameenphone";
            else if(number[4]=='8')
                operatore="Robi";
            else if(number[4]=='9')
                operatore="Banglalink";
            else if(number[4]=='5')
                operatore="Teletalk";
            else
                operatore="Citycell";
        }
        cout<<number<<" "<<operatore<<endl;
    }
    return 0;
}
