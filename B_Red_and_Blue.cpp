#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define debug cout<<"debug"<<endl;
#define kk ios::sync_with_stdio(false); cin.tie(0);

int main()
{
    
    kk;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x=0,y=0,z,count=0,sum=0,n,m;
        cin>>n;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
            x+=a[i];
            sum=max(sum,x);
        }
        cin>>m;
        ll b[m];
        for(ll i=0;i<m;i++)
        {
            cin>>b[i];
            y+=b[i];
            count=max(count,y);
        }
       
        cout<<sum+count<<endl;
    }


    return 0;
}

