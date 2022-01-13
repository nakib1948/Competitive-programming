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
        ll a[n];
        map<ll,ll>ma;
        vector<ll>v,v1;
        rep(i,n)
        {
            cin>>a[i];
            ma[a[i]]++;
        }
        priority_queue<ll>q;
        for(auto it:ma)
        {
           q.push(it.ss);
        }

        while(q.size()>=2)
        {
            ll k=q.top();
            q.pop();
            ll k1=q.top();
            q.pop();
            k--;
            k1--;
            if(k>0)
            q.push(k);
            if(k1>0)
            q.push(k1);
        }
        if(q.size()==0) cout<< 0 <<endl;
        else cout<< q.top() <<endl;
    }
    return 0;
}

