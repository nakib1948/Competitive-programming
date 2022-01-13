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
vector<ll>v;
void solve()
{
    ll p=1;

    while(1)
    {
        ll sum=Pow(2,p);
        if(sum>1e9)
        break;
        p++;
        v.push_back(sum);
    }
}
int main()
{
      ///"Bismillahir Rahmanir Raheem"///

    heyyoo;
    solve();
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n;
        if(n==1)
        cout<<0<<endl;
        else{
        auto it=upper_bound(v.begin(),v.end(),n);  it--;
        cout<<*it-1<<endl;
        }
    }


    return 0;
}

