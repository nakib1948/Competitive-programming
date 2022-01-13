#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define debug cout<<"debug"<<endl;
#define Quicksilver ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main()
{
     ///"Bismillahir Rahmanir Raheem"///

    Quicksilver;
    ll t;
    cin>>t;
    
        while(t--)
        {
                ll i,j,x=1,y=0,z=0,count=1e10,sum=0,n,m;
                cin>>n;
                ll a[n+1],b[n+1],a1[n+1],b1[n+1];
                memset(b1,0,sizeof(b1));
                memset(a1,0,sizeof(a1));
                for(ll i=1;i<=n;i++)
                {
                    cin>>a[i];
                    y+=a[i];
                    a1[i]=y;
                }
                for(ll i=1;i<=n;i++)
                {
                    cin>>b[i];
                    z+=b[i];
                    b1[i]=z;
                }
                if(n==1)cout<< 0 <<endl;

                else{
                vector<ll>v;
                for(ll i=2;i<n;i++)
                {
                    ll k=a1[n]-a1[i],k1=b1[i-1];
                    v.pb(max(k,k1));
                }
                v.pb(a1[n]-a1[1]);
                v.pb(b1[n]-b[n]);
                sort(v.begin(),v.end());
                cout<< v[0] <<endl;
                
                }
        }


    return 0;
}

