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
        ll i,j,x,y,z,count=INT_MAX,sum=0,n,m;
        cin>>n;
        ll a[n],b[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
            count=min(count,a[i]);
            sum=max(sum,a[i]);
        }
        sort(b,b+n);
        bool ok=true;
        for(ll i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                ok=false;
                break;
            }
        }
        if(ok)
        cout<<0<<endl;
        else
        {
            if(a[0]==count || a[n-1]==sum)
            cout<<1<<endl;
            else
            {
                if(a[0]==sum && a[n-1]==count)
                cout<<3<<endl;
                else 
                cout<<2<<endl;
            }
        }
        

    }


    return 0;
}

