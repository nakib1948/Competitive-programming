#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
     
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n;
        cin>>n;
        map<ll,ll>mp;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        bool ok=true;
        for(auto x:mp)
        {
            if(x.ss>1)
            {
                ok=false;
                break;
            }
        }
        cout<<(ok ? "NO":"YES")<<endl;
    }


    return 0;
}

