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
        ll i,x,y,z,k,count=0,sum=0,n;
        cin>>n>>x>>y;
        vector<ll>v;
        if(n==2)
        {
            cout<<x<<" "<<y<<endl;
        }
        else
        {
            ll k=y-x;
            for(ll i=n-1;i>0;i--)
            {
                if(k%i==0&&(i+1)<=n)
                {
                    sum=max(sum,i);
                }
            }
            ll j=k/sum;
            for(ll i=y;i>0;i-=j)
            {
                v.pb(i);
                n--;
                if(n==0)
                  break;
            }
            if(n>0)
            {
                ll sum1=y;
                for(ll i=0;i<n;i++)
                {
                    sum1+=j;
                    v.pb(sum1);
                }
            }
            sort(v.begin(),v.end());
            for(auto x:v)
              cout<<x<< " ";
              cout<<endl;
        }

    }
    return 0;
}

