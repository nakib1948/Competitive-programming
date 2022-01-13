#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define debug cout<<"debug"<<endl;
ll gcd(ll a, ll b)
{
    return (b == 0 ? a : gcd(b, a % b));
}
int main()
{

    ll t;
    cin>>t;
    getchar();
    while(t--)
    {
        ll i=0,j,x,y,z,count=0,sum=-1,n,m;
        vector<ll>v;
        string s;
        getline(cin,s);
        s+=" ";
        for(ll i=1;i<s.size();i++)
        {
            if(s[i]==' '&& s[i-1]==' '){
            s.erase(i,1);
            i--;
            }
        }

        j=0;
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                string w=s.substr(j,i-j);
                j=i+1;
                ll k=stoll(w);
                v.pb(k);
            }
        }

        for(ll i=0;i<v.size();i++)
        {
            for(ll j=i+1;j<v.size();j++)
            {
                sum=max(sum,gcd(v[i],v[j]));
            }
        }
        cout<<sum<<endl;
    }


    return 0;
}

