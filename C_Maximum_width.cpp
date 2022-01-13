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
  
        ll j,x=0,y=0,z,count=0,sum=0,n,m;
        cin>>n>>m;
        string s,w;
        cin>>s>>w;
        vector<ll>v[m];
        j=0;
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]==w[j])
            {
               v[j].pb(i);
               j++;
            }
            if(j==m)
            break;
        }
        j=m-1;
        for(ll i=s.size()-1;i>=0;i--)
        {
            if(s[i]==w[j])
            {
                v[j].pb(i);
                j--;
            }
            if(j<0)
            break;
        }
        for(ll i=1;i<m;i++)
        {
            sum=max(sum,v[i][1]-v[i-1][0]);
        }
        cout<<sum<<endl;
        
    return 0;
}

