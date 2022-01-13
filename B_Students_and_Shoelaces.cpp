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
        vector<ll>v[n+1];
        for(ll i=1;i<=m;i++)
        {
            cin>>x>>y;
            v[x].pb(y);
            v[y].pb(x);
        }
        while(1)
        {
            vector<ll>v1;
            count=0;
            for(ll i=1;i<=n;i++)
            {
                if(v[i].size()==1)
                {
                     v1.pb(i);
                     count=1;
                     v[i].clear();
                }
               
            }
            if(count==0)
            break;

            for(ll k=0;k<v1.size();k++)
            {
            for(ll i=1;i<=n;i++)
            {
                for(ll j=0;j<v[i].size();j++)
                {
                    if(v[i][j]==v1[k])
                    {
                        v[i].erase(v[i].begin()+j);
                    }
                }
            }
            }
            sum++;
        }
        cout<<sum<<endl;


    return 0;
}

