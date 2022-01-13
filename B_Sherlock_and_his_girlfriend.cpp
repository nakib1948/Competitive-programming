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
ll mx=100005,direction[100005];
bool prime[100005];
vector<ll>v;
void seive()
{
    memset(prime, true, sizeof(prime));

    for (ll p=2; p*p<=mx; p++)
    {
        if (prime[p] == true)
        {
            for (ll i=p*p;i<=mx;i+=p)
                prime[i] = false;
        }
    }

    for (ll p=2;p<=mx;p++)
        if (prime[p])
            v.pb(p);
}
int main()
{
     ///"Bismillahir Rahmanir Raheem"///

        heyyoo;

        seive();
        ll i,j,x,y,z,count=0,sum=0,n,m;
        for(ll i=0;i<v.size();i++)
        {
            direction[v[i]]=1;
        }
        cin>>n;
        if(n==1)cout<<1<<endl<<1<<endl;
        else if(n==2)
        cout<<1<<endl<<1<<" "<<1<<endl;
        else{
        cout<<2<<endl;
        for(ll i=1;i<=n;i++)
        {
            if(direction[i+1])
            cout<< 1 <<" ";
            else cout<< 2 <<" ";
        }
        cout<<endl;
        }
    return 0;
}

