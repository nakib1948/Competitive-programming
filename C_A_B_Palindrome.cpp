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
        ll i,j,x,y,z,count=0,sum=0,n,m,one=0,zero=0,q=0,o;
        cin>>n>>m;z=n,o=m;
        string s;
        cin>>s;x=s.size();x--;
        for(ll i=0;i<=x;i++)
        {
            if(s[i]=='?')q++;
            else if(s[i]=='0')zero++;
            else if(s[i]=='1')one++;
        }
        if(q==0)
        {
            if(one==m && zero==n)
            {
                string w;
                w=s;
                reverse(w.begin(),w.end());
                if(s==w)
                cout<<s<<endl;
                else cout<< -1 <<endl;
            }
            else cout<<-1<<endl;
        }
        else{
                q=0,one=0,zero=0;
                for(ll i=0;i<s.size();i++)
                {
                if(s[i]!='?')
                {
                    if(s[i]=='1' && s[x-i]!='0')
                        s[x-i]='1';
                    else if(s[i]=='0' && s[x-i]!='1')
                        s[x-i]='0';
                }
                }
                    
                for(ll i=0;i<=x;i++)
                {
                    if(s[i]=='?')q++;
                    else if(s[i]=='0')zero++;
                    else if(s[i]=='1')one++;
                }
    
        if((n-one+m-zero)==q)
        {
            if(q&1)
            {
                n-=zero;
                m-=one;
                one=0,zero=0;
                if((n%2==0 && m%2==1)|| (n%2==1 && m%2==0))
                {
                    if(s[s.size()/2]!='?')
                    cout<< -1 <<endl;
                    else
                    {
                        if(n&1)
                        {
                            s[s.size()/2]='0';
                            n--;
                        }
                        else if(m&1)
                        {
                            s[s.size()/2]='1';
                            m--;
                        }
                        for(ll i=0;i<(s.size()/2);i++)
                        {
                            if(s[i]=='?' && m==0)
                            {
                                if(n>=2)
                                {
                                    s[i]='0';
                                    s[x-i]='0';
                                    n-=2;
                                }
                            }
                            else if(s[i]=='?' && m>=2)
                            {
                                s[i]='1';
                                s[x-i]='1';
                                m-=2;
                            }
                        }
                        for(ll i=0;i<=x;i++)
                        {
                            if(s[i]=='1')one++;
                            else if(s[i]=='0')zero++;
                        }
                        string w;
                        w=s;
                        reverse(w.begin(),w.end());
                        if(one==o && zero==z && s==w)
                        cout<<s<<endl;
                        else cout<< -1 <<endl;
                    }
                    
                }
                else cout<< -1 <<endl;
            }
            else
            {
                n-=zero;
                m-=one;
                one=0,zero=0;
                if((n%2==0) && (m%2==0))
                {
                      for(ll i=0;i<(s.size()/2);i++)
                        {
                            if(s[i]=='?' && m==0)
                            {
                                if(n>=2)
                                {
                                    s[i]='0';
                                    s[x-i]='0';
                                    n-=2;
                                }
                              
                            }
                            else if(s[i]=='?' && m>=2)
                            {
                                s[i]='1';
                                s[x-i]='1';
                                m-=2;
                            }
                        }
                       for(ll i=0;i<=x;i++)
                        {
                            if(s[i]=='1')one++;
                            else if(s[i]=='0')zero++;
                        }
                        string w;
                        w=s;
                        reverse(w.begin(),w.end());
                        if(one==o && zero==z && s==w)
                        cout<<s<<endl;
                        else cout<< -1 <<endl;
                }
                else cout<<-1<<endl;
            }
            
        }
        else cout<< -1 <<endl;
        //cout<<endl;
    }
    }

    return 0;
}

