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
        cin>>x>>y;
        map<ll,ll>mp,mp1,mp2,mp3;

        mp[x+y]=1;
        mp1[x-y]=1;
        mp2[x]=1;
        mp3[y]=1;

        cout<<"YES"<<endl;
        for(ll i=1;i<m;i++)
        {
            ll x,y;
            cin>>x>>y;
            
            if(mp[x+y]==0 && mp1[x-y]==0 && mp2[x]==0 && mp3[y]==0)
            {
            cout<<"YES"<<endl;
            mp[x+y]=1;
            mp1[x-y]=1;
            mp2[x]=1;
            mp3[y]=1;
            }
            else cout<<"NO"<<endl;
            
        }


    return 0;
}

