#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
     
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        while(m--)
        {
            cin>>x>>y;
          
            bool ok=true;
            ll j=0;
          
            for(ll i=0;i<x-1;i++)
            {
                if(s[i]==s[x-1])
                {
                    ok=false;
                    break;
                }
                
            }
           
                for(ll i=y;i<s.size();i++)
                {
                    if(s[i]==s[y-1])
                    {
                        ok=false;
                        break;
                    }
                }
          
              
            cout<<(ok ? "NO":"YES")<<endl;
        }
        
    }


    return 0;
}

