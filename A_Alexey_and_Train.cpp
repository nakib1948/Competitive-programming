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
    ll t;cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n;
        pair<ll,ll>pa[n];
        rep(i,n)cin>>pa[i].ff>>pa[i].ss;
        ll a[n];
        rep(i,n)cin>>a[i];
        if(n==1)cout<<pa[0].ff+a[0]<<endl;
        else{
        for(ll i=0;i<n;i++)
        {
            if(i==0)
            {
                ll k=pa[i].ff+a[i];
                x=(pa[i].ss-pa[i].ff+1)/2;
                if((k+x)<=pa[i].ss)
                    sum=pa[i].ss;
                else 
                    sum=k+x;
            }
            else if(i==n-1)
            {
                ll k=pa[i].ff+a[i]-pa[i-1].ss;
                sum+=k;
            }
            else
            {
                ll k=pa[i].ff+a[i]-pa[i-1].ss;
                y=k+sum;
                x=(pa[i].ss-pa[i].ff+1)/2;
                if((y+x)<=pa[i].ss)
                    sum=pa[i].ss;
                else 
                    sum=y+x;
            }
            
        }
            cout<<sum<<"\n";
        }
    }


    return 0;
}

