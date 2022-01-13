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
                ll i,j=0,x,y,z,count=0,sum=0,n,m;
                string s,w;
                cin>>s>>w;
                for(ll i=0;i<s.size();i++)
                {
                    j=0;count=0;
                    if(s[i]==w[j])
                    {
                        
                        for(ll l=i;l<s.size();l++)
                        {
                            if(j<w.size())
                            {
                                if(s[l]==w[j]){
                                count++;
                                j++;
                                }
                                else break;
                            }
                            else
                            {
                                break;
                            }
                        }
                        
                    }
                    sum=max(sum,count);
                }
                cout<<sum<<endl;
                if(sum==w.size())
                cout<<"YES"<<endl;
                else{
                ll k=w.size()-sum;
                bool ok=false;
                for(ll i=0;i+sum<=s.size();i++)
                {
                    count=0;
                    string q=s.substr(i,sum),r="";
                    for(ll j=i+sum-2;j>=0;j--)
                    {
                        r+=s[j];
                        count++;
                        if(count==k)
                        break;
                    }
                    q+=r;
                    if(q==w)
                    {
                        ok=true;
                        break;
                    }
                }
                if(!ok)
                {
                    reverse(s.begin(),s.end());
                    for(ll i=0;i+w.size()<=s.size();i++)
                    {
                        string q=s.substr(i,w.size());
                        if(q==w)
                        {
                            ok=true;
                            break;
                        }
                    }
                }
                cout<<(ok ? "YES":"NO") <<endl;
            }
            }

    return 0;
}

