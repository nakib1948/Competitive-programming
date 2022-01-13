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

int main()
{
     ///"Bismillahir Rahmanir Raheem"///

        heyyoo;
   
        ll x,y,z,count=0,sum=0,n,m;
        cin>>n>>x>>y>>m;
        ll a[n];
        rep(i,n) cin>>a[i];

        sort(a,a+n);
        for(ll i=2;i<=n;i++)
        {
            sum=0;
            ll k=0,k1=i-1;
            for(ll l=0;l<i;l++)
            {
                sum+=a[l];
            }
            if(sum<=y && sum>=x && (a[k1]-a[k])>=m)
            count++;
            while(k<n && k1<n)
            {
                sum-=a[k];
                k1++;
                sum+=a[k1];
                k++;
                if(sum<=y && sum>=x && (a[k1]-a[k])>=m)
                count++;
            }
        }

        cout<<count<<endl;

    return 0;
}

