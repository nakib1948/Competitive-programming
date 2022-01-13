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
     ///"Bismillahir Rahmanir Raheem"///

    heyyoo;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        vector<ll>v;
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            v.pb(i);
        }

        if(v.size()==0)
        cout<<s<<endl;
        else{
        for(ll i=0;i<v.size()-1;i++)
        {
            ll k=v[i+1]-v[i]-1;
          
            if(k>1){
            x=m;
            if(k<(2*x))
            {
                k=k/2;
                y=0;
                for(ll j=v[i]+1;;j++)
                {
                    y++;
                    s[j]='1';
                    if(y>=k)
                    break;
                }
                y=0;
                for(ll j=v[i+1]-1;;j--)
                {
                    y++;
                    s[j]='1';
                    if(y>=k)
                    break;
                }
            }
            else
            {
                y=0;
                for(ll j=v[i]+1;;j++)
                {
                    y++;
                    s[j]='1';
                    if(y>=x)
                    break;
                }
                y=0;
                for(ll j=v[i+1]-1;;j--)
                {
                    y++;
                    s[j]='1';
                    if(y>=x)
                    break;
                }
            }
            }
            
        }
        y=0;
        for(ll i=v[0]-1;i>=0;i--)
        {
            y++;
            s[i]='1';
            if(y==m)
            break;
        }
        y=0;
        for(ll i=v[v.size()-1]+1;i<s.size();i++)
        {
            y++;
            s[i]='1';
            if(y==m)
            break;
        }
        cout<<s<<endl;

        }
    }


    return 0;
}

