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
        string s,s1,s2,s3,s4,s5;
        cin>>s>>n>>s1>>m;
        if((n+s.size())>(m+s1.size()))
        cout<<">"<<endl;
        else if((n+s.size())<(m+s1.size()))
        cout<<"<"<<endl;
        else if((n+s.size())==(m+s1.size()))
        {
            if(s.size()>s1.size())
            {
                for(ll i=0;i<m;i++)
                {
                    string w="0";
                    s1+=w;
                    
                    if(s1.size()==s.size())
                    break;
                }
            }
            else if(s.size()<s1.size())
            {
                    for(ll i=1;i<=n;i++)
                    {
                        string w="0";
                        s+=w;
                        
                        if(s.size()==s1.size())
                        break;
                    }
            }
              bool ok=true;
              count=0;
            for(ll i=0;i<s.size();i++)
            {
                if(s[i]==s1[i])
                  count++;
                else if(s[i]>s1[i])
                break;
                else if(s[i]<s1[i])
                {
                    ok=false;
                    break;
                }
            }
            
            if(count==s.size())
            cout<<"="<<endl;
            else if(ok)
            cout<<">"<<endl;
            else cout<<"<"<<endl;
        }
        
    }


    return 0;
}

