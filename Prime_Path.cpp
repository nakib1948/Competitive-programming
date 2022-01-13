#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
vector<ll>v[10005],v1;
ll find1[10005],visited[10005];
void bfs(ll edges)
{
    visited[edges]=1;
    find1[edges]=0;
    queue<ll>q;
    q.push(edges);
    while(!q.empty())
    {
        ll x=q.front();
        q.pop();
        for(auto it:v[x])
        {
            if(visited[it]==0)
            {
                visited[it]=1;
                q.push(it);
                find1[it]=find1[x]+1;
            }
        }
    }
}
bool isprime(ll x)
{
    for(ll i=2;i*i<=x;i++)
    {
        if((x%i)==0)
        return false;
    }
    return true;
}
bool check(ll a,ll b)
{
    ll count=0;
    while(a>0)
    {
        if((a%10)!=(b%10))
            count++;
        a/=10,b/=10;
    }
    if(count==1)return true;
    else return false;
}
void primecollection()
{
    for(ll i=1001;i<=10000;i++)
    {
        if(isprime(i))
        {
            v1.pb(i);
        }
    }

    for(ll i=0;i<v1.size();i++)
    {
        for(ll j=i+1;j<v1.size();j++)
        {
            if(check(v1[i],v1[j]))
            {
                v[v1[i]].pb(v1[j]);
                 v[v1[j]].pb(v1[i]);
            }
        }
    }
}


int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
      
    ll t;
    cin>>t;
    primecollection();
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n;
        cin>>x>>y;
        for(ll i=1000;i<=10005;i++)
        {
            find1[i]= -1;
            visited[i]=0;
        }
        bfs(x);
        
        if(find1[y]== -1)
            cout<<"Impossible"<<endl;
        else cout<<find1[y]<<endl;
    }

       
    return 0;
}

