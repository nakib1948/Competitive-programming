#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n>>m;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        sum=a[n-1]+a[n-2];
        if(m<=a[n-1])
        cout<< 1 <<endl;
        else if(sum>=m)
        cout<<2<<endl;
        else
        {
            count=m/sum;
            z=m%sum;
            if(z==0)
            cout<<count*2<<endl;
            else if(z<=a[n-1])
            cout<<count*2 + 1<<endl;
            else cout<<count*2 + 2<<endl;
        }
        
        
    }


    return 0;
}

