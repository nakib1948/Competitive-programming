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
        cin>>n;
        string s;
        cin>>s;
        vector<ll>v;
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='*')
            {
                v.pb(i);
            }
        }
        if(v.size()==0 || v.size()==n || v.size()==1)
        cout<<0<<endl;
        else
        {
            x=v.size()/2;
            count=v[x];
            for(ll i=x-1;i>=0;i--)
            {
                sum+=(count-v[i]-1);
                count--;
                if(count<0)
                break;
            }
            count=v[x];
            for(ll i=x+1;i<v.size();i++)
            {
                sum+=(v[i]-count-1);
                count++;
            }
            cout<<sum<<endl;
        }
        
    }


    return 0;
}

