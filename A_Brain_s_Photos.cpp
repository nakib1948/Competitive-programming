#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define debug cout<<"debug"<<endl;

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
  
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n>>m;
        bool ok=false;
        char a[n][m];
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                cin>>a[i][j];
                if(a[i][j]=='C'||a[i][j]=='M'||a[i][j]=='Y')
                ok=true;
            }
        }
        cout<<(ok ? "#Color":"#Black&White")<<endl;
        
    return 0;
}

