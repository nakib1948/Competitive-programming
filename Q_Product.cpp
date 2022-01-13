#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

int main()
{
    ll sum,x,y,z,count=1;
    cin>>x>>y>>z;
    
    for(ll i=x;i<=y;i++)
    {
        count=(count*i)%z;
    }
    cout<<count<<endl;

    return 0;
}

