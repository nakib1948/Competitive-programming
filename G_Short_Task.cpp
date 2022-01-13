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
ll a[10000005],v[10000005];
int main()
{
     ///"Bismillahir Rahmanir Raheem"///

    for(ll i=1;i<=10000000;i++)
    {
        for(ll j=i;j<=10000000;j+=i)
        {
            v[j]+=i;
        }
    }
    for(ll i=10000004;i>=0;i--)
    {
        if(v[i]>10000000)continue;
        else a[v[i]]=i;
    }
    
    heyyoo;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n;
       
        if(a[n]!=0)
        cout<<a[n]<<endl;
        else cout<<-1<<endl;


     }


    return 0;
}

