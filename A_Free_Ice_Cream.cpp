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
        cin>>n>>m;
        sum=m;
        vector<pair<char,ll> >v;
        while(n--)
        {
            char ch;
            cin>>ch>>y;
            v.pb(mp(ch,y));
        }
        for(ll i=0;i<v.size();i++)
        {
            if(v[i].ff=='+')
            {
                sum+=v[i].ss;
            }
            else if(v[i].ff=='-')
            {
                if(sum>=v[i].ss)
                {
                    sum-=v[i].ss;
                }
                else 
                count++;
            }
        }
        cout<<sum<<" "<<count<<endl;
    return 0;
}

