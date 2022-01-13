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
   
        ll i,j,x,y,z,count=0,sum=1e10,n,m;
        cin>>n;
        ll a[n],b[n];
       
        rep(i,n)
        {
            cin>>a[i];
            count=max(count,a[i]);
        }
        rep(i,n){
        cin>>b[i];
        sum=min(sum,b[i]);
        }
        if(count>sum)
        cout<< 0 <<endl;
        else
        cout<< abs(sum-count)+1<<endl;
 
 
    return 0;
}