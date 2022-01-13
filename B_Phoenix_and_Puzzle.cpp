#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define debug cout<<"debug"<<endl;
#define heyyoo ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main()
{
     ///"Bismillahir Rahmanir Raheem"///

    heyyoo;
    vector<ll>v;
    v.pb(2);
    v.pb(4);
    for(ll i=2;;i++)
    {
        ll x=i*i;
        if((x*2)>1000000000)
        break;

        v.pb(x*2);
        if((x*4) <=1000000000)
        v.pb(x*4);
    }
    sort(v.begin(),v.end());
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n;
        auto it=find(v.begin(),v.end(),n);
        if(it!=v.end())
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }


    return 0;
}

