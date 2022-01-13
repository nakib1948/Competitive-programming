#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
bool isprime(ll x)
{
    if(x%2 == 0)return false;
    for(ll i=3;i*i<=x;i+=2)
    {
        if((x%i)==0)
        return false;
    }
    return true;
}
int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
     
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n;
        cin>>n;
        vector<pair<ll,ll> >pa;
        if((isprime(n)))
        {
            cout<<1<<endl<<n<<endl;
        }
        else
        {
                vector<ll>v;
                for(ll i=2;i*i<=n;i++)
                {
                    sum=0;
                    ll x=n;
                    if((x%i)==0)
                    {
                        while((x/i)%i==0)
                        {
                              sum++;
                              x=x/i;
                        }
                        pa.pb(mp(sum,i));
                    }
              
                 }
                 if(pa.size()>0)
                 {
                        sort(pa.begin(),pa.end());
                        reverse(pa.begin(),pa.end());
                        while((n/pa[0].ss)%pa[0].ss==0)
                        {
                              v.pb(pa[0].ss);
                              n=n/pa[0].ss;
                        }
                        v.pb(n);
                        cout<<v.size()<<endl;
                        for(auto x:v)
                        cout<<x<<" ";
                        cout<<endl;
                 }
                 else 
                 cout<<1<<endl<<n<<endl;
        }

    }
    return 0;
}

