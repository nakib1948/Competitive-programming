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
        cin>>n;
        vector<pair<ll,ll> >v;
        rep(i,n)
        {
            cin>>x>>y;
            v.pb(mp(x,y));
        }
        vector<char>v1;
        for(ll i=0;i<n;i++)
        {
            if(((sum+v[i].ff)-count)>500)
            {
                v1.pb('G');
                count+=v[i].ss;
            }
            else
            {
                v1.pb('A');
                sum+=v[i].ff;                
            }
        }
        for(auto it:v1)
        cout<<it;
        cout<<endl;

    

    return 0;
}

