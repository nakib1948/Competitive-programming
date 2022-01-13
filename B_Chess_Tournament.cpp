#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define debug cout<<"debug"<<endl;
#define Quicksilver ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main()
{
     ///"Bismillahir Rahmanir Raheem"///

    Quicksilver;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,m;
        vector<string>v;
        vector<ll>v1;
        string s;
        cin>>n>>s;
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='2'){
            count++;
            v1.pb(i);
            }
        }
        if(count==0)
        {
            cout<<"YES"<<endl;
            string w="";
            for(ll i=0;i<n;i++)
                w+='.';
            for(ll i=0;i<n;i++)
                v.pb(w);
            for(ll i=0;i<n;i++)
            {
                for(ll j=0;j<n;j++)
                {
                    if(v[i][j]=='.')
                    v[i][j]='=';
                }
                v[i][i]='X';
            }
            for(ll i=0;i<n;i++)
            cout<<v[i]<<endl;

        }
        else if(count<3)
        cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            string w="";
            for(ll i=0;i<n;i++)
                w+='.';
            for(ll i=0;i<n;i++)
                v.pb(w);
            for(ll i=0;i<v1.size()-1;i++)
            {
                v[v1[i]][v1[i+1]]='+';
                v[v1[i+1]][v1[i]]='-';
            }
            v[v1[0]][v1[v1.size()-1]]='-';
            v[v1[v1.size()-1]][v1[0]]='+';
            for(ll i=0;i<n;i++)
            {
                for(ll j=0;j<n;j++)
                {
                    if(v[i][j]=='.')
                    v[i][j]='=';
                }
                v[i][i]='X';
            }
            for(ll i=0;i<n;i++)
            cout<<v[i]<<endl;


        }
        
    }


    return 0;
}

