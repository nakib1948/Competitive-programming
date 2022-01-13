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
        ll i,j,x,y,z,count=0,sum=0,n;
        cin>>n>>x;
        sum+=x;
        vector<pair<char,ll> >v;
        for(i=0;i<n;i++)
        {
            ll k;
            char c;
            cin>>c>>k;
            v.pb(mp(c,k));
        }
        for(auto x:v)
        {
            if(x.ff=='-')
            {
                if((sum-x.ss)<0)
                {
                    count++;

                }
                else
                {
                    sum-=x.ss;
                }
                
            }
            else if(x.ff=='+')
            {
                sum+=x.ss;
            }
        }
        cout<<sum<<" "<<count<<endl;

    return 0;
}

