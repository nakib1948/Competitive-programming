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
ll temp[200005];
int main()
{
     ///"Bismillahir Rahmanir Raheem"///

         heyyoo;
   
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n>>m>>x;
        vector<ll> a(n),b(m);
        vector<pair<ll,ll> >v;
        rep(i,n){
        cin>>a[i];
        v.pb(mp(a[i]-x,a[i]+x));
        }
        for(ll i=0;i<m;i++)
        cin>>b[i];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(x!=0){
        for(ll i=0;i<n;i++)
        {
            auto it=upper_bound(b.begin(),b.end(),v[i].ff);
            if(it==b.end() && b.size()>0)
            {
                it--;
                if(*it<=v[i].ss)
                {
                    count++;
                    b.erase(it);
                }
            }
            else if(b.size()>0)
            {
                if(*it<=v[i].ss)
                {
                    count++;
                    b.erase(it);
                }
            }
            
        }
        cout<<count<<endl;
        }
        else
        {
            for(ll i=0;i<n;i++)
            {
                auto it=lower_bound(b.begin(),b.end(),a[i]);
                if(it==b.end() && b.size()>0)
                {
                    it--;
                    if(*it==a[i])
                    {
                        count++;
                        b.erase(it);
                    }
                }
                else if(b.size()>0)
                {
                    if(*it==a[i])
                    {
                        count++;
                        b.erase(it);
                    }
                }
                
            }
            cout<<count<<endl;
        }
        
   
    return 0;
}

