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
    string s;
    cin>>s;
    ll a[5];
    a[1]=n,a[2]=m,a[3]=x,a[4]=y;
    for(ll i=0;i<s.size();i++)
    {
        sum+=a[s[i]-'0'];
    }
    cout<<sum<<endl;


    return 0;
}

