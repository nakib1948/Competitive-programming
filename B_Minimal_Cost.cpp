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
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=INT_MAX,n,m;
        cin>>n>>x>>y;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
        }
        for(ll i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
            {
                if((a[i]+1)<=(1e6+1))
                sum=min(sum,min(x+y,2*y));
            }
            else if(a[i]>a[i+1])
            {
                if((a[i]-1)==a[i+1])
                {
                    sum=min(sum,min(x,y));
                }
                else 
                {
                    sum=0;
                }
            }
            else if(a[i]<a[i+1])
            {
                if(a[i]==(a[i+1]-1))
                {
                    sum=min(sum,min(x,y));
                }
                else sum=0;
            }
        }
        cout<<sum<<endl;
    }


    return 0;
}

