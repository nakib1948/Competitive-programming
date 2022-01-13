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
        ll i,j,x=0,y=0,z,count=0,sum=0,n,m;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(n==1)
        {
            if(a[0]==0)
            cout<<1<<" "<<2<<endl;
            else cout<<2<<" "<<1<<endl;
        }
        else{
                for(ll i=0;i<n-1;i++)
                {
                    if(a[i]==0 && a[i+1]==1)
                    {
                        x=i+1;
                        y=i+2;
                        break;
                    }
                }
                if(x==0 && y==0)
                {
                    if(a[n-1]==0)
                    {
                        for(ll i=1;i<=n;i++)
                        cout<<i<<" ";
                        cout<<n+1<<endl;
                    }
                    else if(a[0]==1)
                    {
                        cout<<n+1<<" ";
                        for(ll i=1;i<=n;i++)
                        cout<<i<<" ";
                    }
                    else cout<< -1 <<endl;
                }
                else
                {
                    for(ll i=1;i<=x;i++)
                    cout<<i<<" ";
                    cout<<n+1<<" ";
                    for(ll i=y;i<=n;i++)
                    cout<< i <<" ";
                    cout<<endl;
                }
                
        }
    }


    return 0;
}

