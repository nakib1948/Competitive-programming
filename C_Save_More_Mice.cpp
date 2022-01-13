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
        ll i,j,x,y,z,count=1,sum=0,n,m;
        cin>>m>>n;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        sum=m-a[n-1];
        for(ll i=n-2;i>=0;i--)
        {
            if(a[i]>sum)
            {
                count++;
                sum+=(m-a[i]);
            }
            else break;
        }
        cout<<count<<endl;
    }


    return 0;
}

