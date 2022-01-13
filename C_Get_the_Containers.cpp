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

    heyyoo;
    ll t;
    cin>>t;
    for(ll l=1;l<=t;l++)
    {
        ll i,x,y,z,count=0,sum=0,n,m,ans=0;
        cin>>n>>m;
        vector<ll>v(n);
        rep(i,n)
        {
            cin>>v[i];
            sum+=v[i];
        }
        ll low=0,high=1e9,j=0;
        while(low+1<high)
        {
            ll mid=(low+high+1)/2;
            ll y=0,count=0,ans=0;
            while(y<n)
            {
                if(count+v[y] <=mid)
                {
                    j=0;
                    count+=v[y];
                }
                else
                {
                    j=1;
                    count=v[y];
                    ans++;
                }
                y++;
            }
            if(j==0)
            ans++;
           // cout<<ans<<endl;
            if(ans>=m)
            low=mid;
            else high=mid;
        }

        cout<<"Case "<<l<<": "<<low<<endl;
    }


    return 0;
}

