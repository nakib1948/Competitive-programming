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
ll Pow(ll x,ll y){return y==0?:x*pow(x,y-1);}
ll gcd(ll a, ll b){return (b == 0 ? a : gcd(b, a % b));}
ll lcm(ll a, ll b){return (a * (b / gcd(a, b)));}

int main()
{
     ///"Bismillahir Rahmanir Raheem"///

    heyyoo;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=INT_MAX,n;
        string s1,w1,s,w;
        cin>>s1>>w1;

        if(s1.size()>=w1.size())
        {
            s=s1;
            w=w1;
        }
        else 
        {
            s=w1;
            w=s1;
        }

        for(ll i=0;i<w.size();i++)
        {
            for(ll j=i;j<w.size();j++)
            {
                string q=w.substr(i,(j-i+1));
                ll len=j-i+1;
                for(ll k=0;k+len<=s.size();k++)
                {
                    string m=s.substr(k,len);
                    if(m==q)
                    {
                        count=1;
                        ll k1=s.size()+w.size()-q.size()-m.size();
                        sum=min(sum,k1);
                    }
                }
            }
        }
        if(count==1) 
        cout<<sum<<endl;
        else cout<<s.size()+w.size()<<endl;
    }


    return 0;
}

