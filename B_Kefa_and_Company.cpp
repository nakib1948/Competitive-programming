#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define debug cout<<"debug"<<endl;
#define Quicksilver ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main()
{
     ///"Bismillahir Rahmanir Raheem"///

        Quicksilver;
 
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n>>m;
        vector<pair<ll,ll> >v;
        for(ll i=0;i<n;i++)
        {
            cin>>x>>y;
            v.pb(mp(x,y));
        }
        sort(v.begin(),v.end());
        ll a[n];
        a[0]=v[0].ss;
        for(ll i=1;i<n;i++)
        {
            a[i]=v[i].ss+a[i-1];
        }

        for(ll i=0;i<n;i++)
        {
            ll low=i,high=n;
            while(low+1<high)
            {
                ll mid=(low+high)/2;
                if((v[mid].ff-v[i].ff)<m)
                    low=mid;
                else high=mid;
            }
                if(low==n-1)
                {
                        if(i==0)
                            sum=max(sum,a[low]);
                        else
                            sum=max(sum,a[low]-a[i-1]);
                }
                else
                {
                    if(i==0)
                        sum=max(sum,a[low]);
                    else
                        sum=max(sum,a[low]-a[i-1]);
                }
                
        }
        // for(auto it:v)
        // cout<<it.ff<<" "<<it.ss<<endl;
        cout<<max(sum,max(v[0].ss,v[n-1].ss))<<"\n";



    return 0;
}

