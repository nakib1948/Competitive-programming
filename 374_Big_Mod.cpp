#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define debug cout<<"debug"<<endl;

ll bigmod(ll a,ll b,ll c)
{
    if(b==0)return 1;
    ll k=bigmod(a,b/2,c);
    k=(k*k)%c;
    if((b&1)==1)
    k=(k*a)%c;
    return k;
}
int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
     
  
        ll i,j,x,y,z,count=0,sum=0,n;
        while(cin>>x>>y>>z)
        {
            cout<<bigmod(x,y,z)<<endl;
        }


    return 0;
}

