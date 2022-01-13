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
        cin>>n>>m>>x>>y;
        set<ll>s;
        s.insert(n);
        s.insert(m);
        s.insert(x);
        s.insert(y);
        cout<<4-s.size()<<endl;
    return 0;
}

