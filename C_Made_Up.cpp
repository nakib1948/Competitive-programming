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
ll a[100005];
int main()
{
     ///"Bismillahir Rahmanir Raheem"///

        heyyoo;
  
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n;
        vector<ll>v(n),v1(n),v2(n);
        map<ll,ll>mp,mp1,mp2;
        for(auto &it:v){
        cin>>it;
        mp[it]++;
        }
        for(auto &it:v1){
        cin>>it;
        mp2[it]++;
        }
        for(auto &it:v2){
        cin>>it;
        
        mp1[it-1]++;
        }

       for(auto it:mp1)
       {
           if(mp[v1[it.ff]]!=0)
           {
               sum+=(it.ss*mp[v1[it.ff]]);
           }
       }
        cout<<sum<<endl;

    return 0;
}

