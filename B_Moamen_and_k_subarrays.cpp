#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define debug cout<<"debug"<<endl;
#define Quicksilver ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main()
{
     ///"Bismillahir Rahmanir Raheem"///

    Quicksilver;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n>>m;
        vector<ll>v;
        map<ll,ll>m1;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
            v.pb(a[i]);
        }
        if(n==1)
        cout<<"YES"<<"\n";
        else{
        sort(v.begin(),v.end());
        for(ll i=0;i<n;i++)
        {
            auto it=upper_bound(v.begin(),v.end(),a[i]);
            if(i==0)
            {
                if(it==v.end())
                count++;
                else
                {
                    if(a[i+1]!=*it)
                    count++;
                }
            }
            else if(i==n-1)
            {
                auto it1=upper_bound(v.begin(),v.end(),a[n-2]);
                if(it1!=it)
                count++;
            }
            else
            {
                if(it==v.end())
                count++;
                else if(*it!=a[i+1])
                count++;
            }
            
        }
        if(count>m)
        cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }

    }
    return 0;
}

