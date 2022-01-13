#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define debug cout<<"debug"<<endl;

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///

        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n>>m;
        char a[n][m];
        rep(i,n)
        {
            for(ll j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        for(ll i=1;i<n-2;i++)
        {
            for(ll j=1;j<m-2;j++)
            {
                if(a[i][j]=='#' && a[i][j+1]=='#' && a[i+1][j]=='#' && a[i+1][j+1]=='#')
                count++;
            }
        }
        cout<<count<<endl;

    return 0;
}

