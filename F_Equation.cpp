#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define rep(i, n) for (i = 0; i < n; i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
 
ll poww(ll x,ll y)
{
    ll sum=x;
    for(ll i=1;i<y;i++)
    {
        sum*=x;
    }
    return sum;
}
 
ll sum(ll a,ll b)
{
    ll count=0;
    for(ll i=2;i<=b;i+=2)
    {
        count+=poww(a,i);
    }
    return count;
}
 
int main()
{
    ll x,y,count=0;
    cin>>x>>y;
    cout<<sum(x,y)<<endl;
   
    return 0;
}