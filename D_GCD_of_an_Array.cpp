#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=1;i<=n;i++)
#define debug cout<<"debug"<<endl;
#define heyyoo ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll Pow(ll x,ll y){return y==0?:x*pow(x,y-1);}
ll gcd(ll a, ll b){return (b == 0 ? a : gcd(b, a % b));}
ll lcm(ll a, ll b){return (a * (b / gcd(a, b)));}

int main()
{
     ///"Bismillahir Rahmanir Raheem"///

        heyyoo;
    
        ll i,j,x,y,z,count=0,sum=0,n,m,k;
        cin>>n>>m;
        ll a[n+2],b[n+2],c[n+2];
        rep(i,n)
        {
            cin>>a[i];
        }
        a[0]=0,b[0]=0,c[0]=0,a[n+1]=0,b[n+1]=0,c[n+1]=0;
        k=a[0],b[0]=a[0];
        for(ll i=1;i<=n;i++)
        {
            k=gcd(a[i],k);
            b[i]=k;
        }
        k=a[n],c[n]=a[n];
        for(ll i=n;i>=0;i--)
        {
            k=gcd(a[i],k);
            c[i]=k;
        }
        while(m--)
        {
            cin>>x>>y;
            a[x]=(a[x]*y)%(1000000000+7);
            ll p=(gcd(b[x-1],a[x]))%(1000000000+7);
            ll p1=(gcd(c[x+1],p))%(1000000000+7);
            cout<<p1<<endl;
            
        }
    


    return 0;
}

