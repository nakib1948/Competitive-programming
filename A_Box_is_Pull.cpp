#include<bits/stdc++.h>
using namespace std; 

#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,k,x,y,x1,y1,count=0,sum=0;
        cin>>x>>y>>x1>>y1;
        
        if(x==x1||y==y1)
        {
            cout<<abs(max(x,x1)-min(x,x1))+abs(max(y,y1)-min(y,y1))<<endl;
        }
        else
        {
            sum=abs(max(x,x1)-min(x,x1))+abs(max(y,y1)-min(y,y1));
            cout<<sum+2<<endl;
        }

    }


    return 0;
}

