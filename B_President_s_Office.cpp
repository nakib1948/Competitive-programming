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
        char c;
        cin>>n>>m>>c;
        
        char a[n+2][m+2];
        set<char>ch;
        memset(a,'.',sizeof (a));
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=m;j++)
            {
                cin>>a[i][j];
            }
        }
          for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=m;j++)
            {
                if(a[i][j]==c)
                {
                    ch.insert(a[i+1][j]);
                    ch.insert(a[i-1][j]);
                    ch.insert(a[i][j+1]);
                    ch.insert(a[i][j-1]);
                }
            }       
        }

        for(auto it:ch)
        {
            if(it=='.' || it==c)
            continue;

            count++;
        }

      
        cout<<count<<endl;


    return 0;
}

