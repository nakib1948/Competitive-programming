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
        cin>>m>>n;
        set<ll>s;
        rep(i,n)
        {
            cin>>x;
            s.insert(x);
        }
        cin>>y;
        for(ll i=0;i<y;i++)
        {
            cin>>x;
            s.insert(x);
        }
        cout<<((s.size()==m)? "I become the guy.":"Oh, my keyboard!")<<endl;

    return 0;
}

