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
ll visited[100001];
vector<ll>v[100001];
vector<string>v1;
void dfs(ll nodes)
{
    visited[nodes]=1;
    for(auto it:v[nodes])
    {
        if(visited[it]==0)
        {
            dfs(it);
        }
    }
}
int main()
{
    
        ll t,x=0;
        cin>>t;
        string s;
        cin.ignore();
        cin.ignore();
        while(t--){

        ll i,j,y,z,count=0,sum=0,n,m;
        char ch;
        cin>>ch;cin.ignore();
        v1.clear();
    
        
        while(getline(cin,s))
        {
            if(s=="")break;
            else v1.pb(s);
        }

        for(ll i=0;i<v1.size();i++)
        {
            string w=v1[i];
            ll k=w[0]-'A';
            ll k1=w[1]-'A';
          
            v[k].pb(k1);
            v[k1].pb(k);
        }
        j=ch-'A';
        for(ll i=0;i<=j;i++)
        {
            if(visited[i]==0)
            {
                dfs(i);
                count++;
            }
        }
        if(x)cout<<endl;
        cout<<count<<endl;
        x=1;

        for(ll i=0;i<=j;i++)
        {
            v[i].clear();
            visited[i]=0;
        }
}

    return 0;
}

