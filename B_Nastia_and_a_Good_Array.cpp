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
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
        }
        cout<<n/2<<endl;
        for(ll i=1;i<n;i+=2)
        {
            ll k=min(a[i],a[i-1]);
            a[i-1]=k;
            a[i]=1000000009;
            cout<<i<<" "<<i+1<<" "<<a[i-1]<<" "<<a[i]<<endl;
        }
      
    }


    return 0;
}

