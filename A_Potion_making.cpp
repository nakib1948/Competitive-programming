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
        if(n==100)
        cout<<1<<endl;
        else
        {
            x=100-n;
            y=min(n,x);
            for(ll i=y;i>0;i--)
            {
                if(n%i==0 && x%i==0)
                {
                    n=n/i;
                    x=x/i;
                }
            }
            cout<<n+x<<endl;
        }
        
    }


    return 0;
}

