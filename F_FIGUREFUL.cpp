#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define debug cout<<"debug"<<endl;

int main()
{
    ll i,j,x,y,z,count=0,sum=0,n;
    scanf("%lld",&n);
    string s;
    map<pair<ll,ll>,string>m;
    while(n--)
    {
         scanf("%lld %lld",&x,&y);
        cin>>s;
        m[{x,y}]=s;
    }
   scanf("%lld",&x);
    while(x--)
    {
        ll a,b;
         scanf("%lld %lld",&a,&b);
        cout<<m[{a,b}]<<endl;
    }

    return 0;
}

