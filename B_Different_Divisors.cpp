#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define debug cout<<"debug"<<endl;
#define mx 100005
ll a[mx];
vector<ll>v;
void seive()
{
    //vector<ll>v;
    v.pb(2);
    for(ll i=1; i<=mx; i++)
     {  a[i]=i;}
    for(ll i=2; i<=mx; i+=2)
     {  a[i]=2;}
    for(ll i=3; i*i<=mx; i+=2)
    {
        if(a[i]==i)
        {
            for(ll j=i*i; j<=mx; j+=i)
            {
                if(a[j]==j)
                {
                    a[j]=i;
                }
            }
        }

    }
    for(ll i=3;i<=mx;i+=2)
    {
        if(a[i]==i)
         {   v.pb(i);}
    }
        
}
int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
    seive();
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n;
        for(ll i=0;i<v.size();i++)
        {
            //debug;
            if(v[i] >= (n+1) && count==0)
            {
                //debug;
                x=v[i];
                count=v[i];
            }
            else if(count!=0)
            {
                //debug;
                if(v[i] >= (x+n))
                {
                    y=v[i];
                    break;
                }
            }
        }
        //cout<<v.size()<<endl;
        cout<<x*y<<endl;
    }


    return 0;
}

