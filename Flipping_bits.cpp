#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
ll Pow(ll x,ll y){return y==0?:x*pow(x,y-1);}

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
     
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x=0,y,z,count=0,sum=0,n;
        cin>>n;
        for(i=0;i<=31;i++)
        {
            n^=(1U<<i);
        }
        cout<<n<<endl;
    }


    return 0;
}

