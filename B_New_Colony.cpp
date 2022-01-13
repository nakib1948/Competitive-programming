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
     ///"In the name of Allah,most gracious and most merciful"///
    heyyoo;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,dil=0,m;
        cin>>n>>m;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
        }
    
        while(1)
        {
            m--;
            count=1;
            for(ll i=0;i<n-1;i++)
            {
                if(a[i]>=a[i+1])
                continue;
                else if(a[i]<a[i+1])
                {
                    a[i]++;
                    count=0;
                    dil=i;
                    break;
                }
            }
            if(count==1)
            break;
            if(m==0)
            break;
        }
        if(m==0 && count==0)
        cout<<dil+1<<endl;
        else 
        cout<< -1 <<endl;
 
    }


    return 0;
}

