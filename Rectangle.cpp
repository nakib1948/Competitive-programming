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
     ///"In the name of Allah,most gracious and most merciful"///

    heyyoo;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,m,k;
        cin>>n>>m;
        char a[n][m];
        ll b[n];
        memset(b,0,sizeof(b));
        rep(i,n)
        {
            for(ll j=0;j<m;j++)
            {
                cin>>a[i][j];
                if(a[i][j]=='1')
                {
                    b[i]++;
                }
            }
        }
        set<ll>s;
        for(ll i=0;i<n;i++)
        {
            if(b[i]!=0)
           {
             s.insert(b[i]);
             count++;
           }
        }
        if(s.size()==1 && count>1)
        {
            for(ll i=0;i<n;i++)
            {
                if(b[i]!=0)
                {
                    x=i;
                    break;
                }
            }
            for(ll j=n-1;j>=0;j--)
            {
                if(b[j]!=0)
                {
                    y=j;
                    break;
                }
            }
            for(ll i=0;i<m;i++)
            {
                if(a[x][i]=='1')
                {
                    z=i;
                    break;
                }
            }
            for(ll i=m-1;i>=0;i--)
            {
                if(a[y][i]=='1')
                {
                    k=i;
                    break;
                }
            }
            bool ok=true;
            for(ll i=x;i<=y;i++)
            {
                for(ll j=z;j<=k;j++)
                {
                    if(a[i][j]=='0')
                    {
                        ok=false;
                        break;
                    }
                }
            }
            cout<<(ok ? "YES":"NO")<<endl;
        }
        else 
        cout<<"NO"<<endl;
    }


    return 0;
}

