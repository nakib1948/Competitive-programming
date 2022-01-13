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
        ll a[n];
        if((n-1)/2 >=m)
        {
            x=1;
            for(ll i=0;i<n;i++)
            {
                a[i]=x;
                x++;
            }
            for(ll i=1;i<n-1;i+=2)
            {
                if(m==0)
                break;
                m--;
                ll k=a[i];
                a[i]=a[i+1];
                a[i+1]=k;
            }
            for(ll i=0;i<n;i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        else 
        cout<<-1<<endl;
    }


    return 0;
}

