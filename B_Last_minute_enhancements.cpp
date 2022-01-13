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
        ll i,j,x,y,z,count=1e10,sum=0,n,m;
        cin>>n;
        map<ll,ll>mp;
        set<ll>s;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];   
        }
        sort(a,a+n);
        s.insert(a[0]);
        for(ll i=1;i<n;i++)
        {
            if(a[i]<=a[i-1])
            a[i]++;

            s.insert(a[i]);
        }

        
        cout<<s.size()<<endl;
      
    }


    return 0;
}

