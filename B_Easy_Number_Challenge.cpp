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
ll a[1000005];
void alldivisors()
{
    for(ll i=1;i<=1000000;i++)
    {
        ll z=1000000/i;
        for(ll j=1;j<=z;j++)
        {
            a[i*j]+=1;
        }
    }
}
int main()
{
     ///"Bismillahir Rahmanir Raheem"///

        heyyoo;
        alldivisors();
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>x>>y>>z;
        for(ll i=1;i<=x;i++)
        {
            for(ll j=1;j<=y;j++)
            {
                for(ll k=1;k<=z;k++)
                {
                   // cout<<i<<" "<<j<<" "<<k<<endl;
                   sum+=a[i*j*k];
                }
            }
        }
        cout<<sum%1073741824<<endl;

    return 0;
}

