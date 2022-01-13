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
#define mx 100005

 
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
        vector<ll>v;
        for(ll i=1;i*i<=1000000;i++)
        {
            if(count==2)
            break;
           if(n%i==0)
           {
                v.pb(i);
                v.pb((n/i)%1000000007);
                count++;
           }
        }
        set<ll>s;
        for(auto it:v)
        {
            s.insert(it);
        }
        if(s.size()==2)
        cout<<(v[0]%1000000007)*(v[1]%1000000007)%1000000007<<endl;
        else{
          
        sort(v.rbegin(),v.rend());
        cout<<(v[0]%1000000007)*(v[1]%1000000007)%1000000007<<endl;
        }
    }


    return 0;
}

