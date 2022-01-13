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
    ll i,j,x,y,z,count=0,sum=0,n,m;
    cin>>n>>m;
    vector<ll>v,v1;
    for(ll i=1;i*i<=m;i++)
    {
        if(m%i==0){
        v.pb(i);
        v.pb(m/i);
        }
    }
    for(ll i=0;i<v.size();i++)
    {
        if(n%v[i]==0)
        v1.pb(v[i]);
    }
    sort(v1.begin(),v1.end());
   
    cin>>z;
    while(z--)
    {
        cin>>x>>y;
        auto it=lower_bound(v1.begin(),v1.end(),y);
        if(*it==y)
        {
            cout<<y<<endl;
        }
        else
        {
            it--;
            if(*it>=x)
            cout<<*it<<endl;
            else 
            cout<< -1 <<endl;
        }    
    }

    return 0;
}

