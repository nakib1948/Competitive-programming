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
ll i,j,x,y,z,c=1,s=1,n,m;
ll f(ll n,ll m,ll x,ll y)
{
    if(n<=x && m<=0)return 1;
    if(n<=x)return s*=f(n-1,m,x,y);
    if(m>=1)return c*=f(m-1,m,x,y);
   
}
int main()
{
     ///"Bismillahir Rahmanir Raheem"///

        heyyoo;
   
        cin>>n>>m;
         f(n,m,m,n-m);
       cout<<s/c<<endl;
    return 0;
}

