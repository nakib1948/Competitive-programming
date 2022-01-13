#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define kk ios::sync_with_stdio(false); cin.tie(0);
int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
    kk;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,k;
        cin>>n>>k;
        ll a[n];
        vector<ll>v;
        for(ll i=0;;i++)
        {
            if(pow(k,i)<=10000000000000000)
            {
                v.pb(pow(k,i));
            }
            else 
            break;
        }
        rep(i,n)
        {
            cin>>a[i];
        }

         bool ok=true;
        for(ll i=0;i<n;i++)
        {
            ok=true;
            sum=0;
            for(ll j=0;j<v.size();j++)
            {
                sum=v[j];
                if(a[i]==v[j])
                {
                    ok=false;
                    break;
                }
                
                for(ll l=j+1;l<v.size();l++)
                {
                    sum+=v[l];
                    if(sum==a[i])
                    {
                        ok=false;
                        break;
                    }
                }
            }
            if(!ok)
            continue;
            else 
            break;
        }

        cout<<(ok ? "YES":"NO")<<endl;
        
    }


    return 0;
}

