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
        ll i,j,x,y,z,count=0,sum=0,n;
        cin>>n;
        ll a[n+1],b[105];
        memset(b,0,sizeof(b));
        rep(i,n)
        {
            cin>>a[i];
            b[a[i]]++;
        }
        while(1){
            count=0;
            for(ll i=0;i<105;i++)
            {
                if(b[i]>0){
                cout<<i<<" ";
                b[i]--;
                }
                if(b[i]==0) count++;
            }
            if(count==105)
            break;

            count=0;
        }
        cout<<endl;
    }


    return 0;
}

