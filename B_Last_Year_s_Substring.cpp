#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define debug cout<<"debug"<<endl;
#define kk ios::sync_with_stdio(false); cin.tie(0);
ll Pow(ll x,ll y){return y==0?:x*pow(x,y-1);}
ll gcd(ll a, ll b){return (b == 0 ? a : gcd(b, a % b));}
ll lcm(ll a, ll b){return (a * (b / gcd(a, b)));}

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
    kk;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n;
        cin>>n;
        string s,s1="2020",s2="020",s3="20",s4="202";
        cin>>s;
        bool ok=true;
        for(ll i=0;i+4<=s.size();i++)
        {
            string w=s.substr(i,4);
            if(w==s1)
            {
                if(i==0 || i+3==s.size()-1)
                {
                    ok=false;
                    break;
                }
            }
            if(!ok)
            break;
        }
        if(ok)
        {
        
                if(s.size()>=4&&s[0]=='2'&&s[1]=='0'&&s[2]=='2'&&s[s.size()-1]=='0')
                {
                    ok=false;
                    
                }
                if(ok)
                {
                    if(s[0]=='2'&&s[1]=='0'&&s.size()>=4)
                    {
                        if(s[s.size()-1]=='0'&&s[s.size()-2]=='2')
                        {
                            ok=false;
                            
                        }
                    }
                   
                }
                if(ok)
                {
                    if(s[0]=='2')
                    {
                        if(s.size()>=4&&s[s.size()-1]=='0'&&s[s.size()-2]=='2'&&s[s.size()-3]=='0')
                        ok=false;
                    }
                }
                
            

        }
        cout<<(ok? "NO":"YES")<<endl;
    }


    return 0;
}

