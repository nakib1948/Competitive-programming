#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define debug cout<<"debug"<<endl;
vector<ll>v(10000005,-1);
int main()
{

    for(ll i=1; i<=5000000; i++)
    {
        ll sum=0;
        for(ll j=1; j*j<=i; j++)
        {
            if(j*j==i) sum+=j;
            else if(i%j==0)
            {
                sum+=j;
                sum+=(i/j);
            }
        }
        if(sum>1e7)
        break;
        if(v[sum]== -1)
        v[sum]=i;
    }

    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n;
        cout<<v[n]<<endl;
    }


    return 0;
}

