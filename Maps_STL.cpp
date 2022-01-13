#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin>>t;
    map<string,ll>mp;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,m;
        string n;
        cin>>x>>n;
        if(x==1)
        {
            cin>>y;
            mp[n]+=y;
        }
        else if(x==2)
        {
            mp[n]=0;
        }
        else
        {
            cout<<mp[n]<<endl;
        }
        
    }


    return 0;
}

