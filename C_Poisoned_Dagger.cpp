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
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n>>m;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
        }
        ll low=0,high=m;
        while(low+1<high)
        {
            ll mid=(low+high)/2;
            sum=0;
            for(ll i=1;i<n;i++)
            {
                if((a[i]-a[i-1]) < mid)
                sum+=(a[i]-a[i-1]);
                else
                {
                    sum+=mid;
                }
            }
            sum+=mid;
            if(sum>=m)
            high=mid;
            else low=mid;
        }
        cout<<high<<endl;
    }


    return 0;
}

