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
   
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n;
        vector<ll>v(n);
        rep(i,n)
        {
            cin>>v[i];
        }
        for(ll i=1;i<n;i++)
        {
            v[i]+=v[i-1];
        }
        cin>>m;
        while(m--)
        {
            cin>>x;
            sum=lower_bound(v.begin(),v.end(),x)-v.begin();
            cout<<sum+1<<endl;
        }


    return 0;
}

