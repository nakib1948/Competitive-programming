#include<bits/stdc++.h>
using namespace std; 

#define ll long long


int main()
{
   
        ll i,count=0,sum=0,n,m;
        cin>>n>>m;
        for(ll i=1;i<=n;i++)
        {
            ll x;
            cin>>x;
            count+=x;
        }
        for(ll i=1;i<=m;i++)
        {
            ll x;
            cin>>x;
            sum+=x;
        }

        cout<<(count==sum ? "Yes":"No")<<endl;
       

    return 0;
}

