
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
     
        ll i,j,x,y,z,count=0,sum=0,n,m,q;
        string s,w;
        cin>>n>>m>>q;
        cin>>s>>w;
        
        ll a[n+1];
        for(ll i=0;i<n;i++)
        {
            a[i]=0;
        }

        for(ll i=0;i+m<=s.size();i++)
        {
            string q=s.substr(i,m);
            if(q==w)
            a[i+m-1]=1;
        }

        while(q--)
        {
            cin>>x>>y;
            sum=0;
            for(ll i= x-2+m ; i<y;i++)
            {
                if(a[i]==1)
                sum++;
            }
            cout<<sum<<endl;
        }
    

    return 0;
}