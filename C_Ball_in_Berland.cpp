#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define debug cout<<"debug"<<endl;
#define kk ios::sync_with_stdio(false); cin.tie(0);

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
    kk;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n;
        cin>>x>>y>>n;
        ll a[n],b[n];
        set<ll>s,s1;
        rep(i,n)
        {
            cin>>a[i];
            s.insert(a[i]);
        }
        rep(i,n)
        {
            cin>>b[i];
            s1.insert(b[i]);
        }
        cout<<(s.size()-1)*(s1.size()-1)<<endl;
    }


    return 0;
}

