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
        while(n--)
        {
            string s;
            cin>>s;
            ll a[m+1];

            memset(a,-1,sizeof(a));
            for(ll i=0;i<s.size();i++)
            {
                ll k=s[i]-'0';
                if(k<=m)
                a[k]=1;
            }
            bool ok=true;
            for(ll i=0;i<=m;i++)
            {
                if(a[i]== -1)
                {
                    ok=false;
                    break;
                }
            }
            if(ok) count++;
        }
        
        cout<<count<<endl;


    return 0;
}

