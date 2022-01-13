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
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
        }
        for(ll i=n-1;i>=0;i--)
        {
            if(a[i]>0)
            {
                sum--;
                sum=max(sum,a[i]-1);
                a[i]=1;
            }
            else if(a[i]==0 && sum>0)
            {
                a[i]=1;
                sum--;
            }
            // else if(sum>0)
            // sum--;
        }
        for(ll i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<endl;
    }


    return 0;
}

