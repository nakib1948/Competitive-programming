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
ll Pow(ll x,ll y){return y==0?:x*pow(x,y-1);}
ll gcd(ll a, ll b){return (b == 0 ? a : gcd(b, a % b));}
ll lcm(ll a, ll b){return (a * (b / gcd(a, b)));}

int main()
{
     ///"Bismillahir Rahmanir Raheem"///

    heyyoo;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n>>m;
        vector<ll>v;
   
        for(ll i=1;i<=n;i++)
        {
            vector<ll>v1;

            for(ll j=1;j<=m;j++)
            {
                ll k;
                cin>>k;
                v1.pb(k);
            }
            sort(v1.begin(),v1.end());
            if(count&1)
            reverse(v.begin(),v.end());
          
            for(auto it:v1)
            v.pb(it);
    
            
            count++;
        }
        count=0;
       for(ll i=0;i<v.size();i++)
       {
           count++;
           cout<<v[i]<<" ";
           if(count==m)
           {
               cout<<endl;
               count=0;
           }
       }
    }


    return 0;
}

