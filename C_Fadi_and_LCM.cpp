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
        ll i,j,x,y,z,count=0,sum=0,n;
        cin>>x;
       vector< pair<ll,pair<ll,ll> > >pa;

            for(i=1;i<1000000;i++)
            {
                sum=0;
                if(x%i==0)
                {
                   sum=i+(x/i);
                   if(((i*(x/i))/( __gcd(x/i,i)))==x)
                   pa.pb(mp(sum,mp(i,x/i)));
                }
            }
            sort(pa.begin(),pa.end());
            cout<<pa[0].ss.ff<<" "<<pa[0].ss.ss<<endl;
        
        


    return 0;
}

