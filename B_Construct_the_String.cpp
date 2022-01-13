#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
     
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n;
        cin>>x>>y>>z;
        vector<char>v;
        v.pb('a');
        j=x/z;
        for(i=1;i<z;i++)
        {
           v.pb('a'+i);
        }
       
        for(ll i=0;i<j;i++)
        {
           for(auto x:v)
            {
                cout<<x;
            }
        }
        for(ll i=0;i<(x%z);i++)
        {
           cout<<v[i];
        }
        cout<<endl;

    }


    return 0;
}

