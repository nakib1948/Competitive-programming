#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define debug cout<<"debug"<<endl;
ll Pow(ll x,ll y){return y==0?:x*pow(x,y-1);}
int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
     
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>x>>y>>z;
        
        while(x%2 !=1)
        {
            x/=2;
            count++;
        }
        while(y%2 !=1)
        {
            y/=2;
            count++;
        }
        
        cout<<(Pow(2,count)>=z? "YES":"NO")<<endl;
    
    }
    return 0;
}

