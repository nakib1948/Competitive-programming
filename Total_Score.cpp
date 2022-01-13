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
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n>>m;
        ll a[m];
        for(ll i=0;i<m;i++)
        {
            cin>>a[i];
        }
        while(n--)
        {
            string s;
            sum=0;
            cin>>s;
            for(ll i=0;i<s.size();i++)
            {
                if(s[i]=='1')
                {
                    sum+=a[i];
                }
            }
            cout<<sum<<endl;
        }
    }


    return 0;
}

