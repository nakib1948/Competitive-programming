#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define debug cout<<"debug"<<endl;
bool check_prime(ll x){if(x%2==0 || x==1){return false;}for(ll i=3;i*i<=x;i+=2){if(x%i==0)return false;}return true;}
int main()
{

    while(true)
    {
        ll n,m;
        cin>>n;
        if(n==0)
        break;
        n=abs(n);
        vector<ll>v;
        for(ll j=1; j*j<=n; j++)
        {
           
            if(j*j==n) v.pb(j);
            else if(n%j==0)
            {
                v.pb(j);
                v.pb(n/j);
            }
            
        }
        set<ll>s;
        for(auto it:v)
        {
            if(it==2)
            s.insert(2);
            else if(check_prime(it))
            s.insert(it);
        }
        
        if(s.size()<=1)
        cout<< -1 <<endl;
        else
        cout<<*s.rbegin()<<endl;
    }


    return 0;
}

