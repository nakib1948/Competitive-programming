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
        ll i,j,x,y,z,count=30,sum=0,n;
        cin>>n;
        ll a[n];
        map<ll,ll>mp;
        rep(i,n)
        {
            cin>>a[i];
        }
        if(n>60)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            bool ok = true;
            for(ll i=0;i<n;i++)
            {
                ll k=a[i]|a[i];
                for(ll j=i;j<n;j++)
                {
                    k=k|a[j];
                    mp[k]++;
                }
            }
            for(auto x:mp)
            {
                if(x.ss>1)
                {
                    ok=false;
                    break;
                }
            }
            if(ok)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
            
        }
        
       

    }


    return 0;
}

