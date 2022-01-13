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
        map<ll,ll>mp,mp1;
        while(n--)
        {
            cin>>x>>y;
            mp[x+y]++;
            mp1[x-y]++;
        }
        for(auto it:mp)
        {
            if(it.ss>1){
            it.ss--;
            sum+=(it.ss*(it.ss+1))/2;
            }
        }
        for(auto it:mp1)
        {
            if(it.ss>1){
            it.ss--;
            sum+=(it.ss*(it.ss+1))/2;
            }
        }
        cout<<sum<<endl; 

    return 0;
}

