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
        cin>>x>>y;
        if(y>x)
        cout<<1<<endl;
        else 
        {
            m=y;
            if(m==1)m++;
            vector<ll>v;
            for(ll i=1;i<=10;i++)
            {
                n=x;
                count=0;
                while(n!=0)
                {
                    n/=m;
                    count++;
                }
                count+=m-y;
                m++;
                v.pb(count);
            }
            sort(v.begin(),v.end());
            cout<<v[0]<<endl;
        }
    }


    return 0;
}

