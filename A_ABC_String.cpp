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
        ll i,j,a=0,b=0,c=0,count=0,sum=0,n;
        string s;
        cin>>s;
        for(ll i=0;i<s.size();i++)    
        {
            if(s[i]=='A') a++;
            else if(s[i]=='B') b++;
            else c++;
        }
        j=max(a,max(b,c));n=s.size()/2;
        if(s[0]==s[s.size()-1] || j>n || (a!=n && b!=n && c!=n))
        cout<<"NO"<<endl;
        else{
        
        if(j==a)
        {
                stack<char>c1,c2;
                for(ll i=0;i<s.size();i++)
                {
                    if(s[i]=='A')
                    c1.push('(');
                    else if(c1.size()>0)
                    c1.pop();
                }
                if(c1.size()==0)
                cout<<"YES"<<endl;
                else
                {
                    for(ll i=0;i<s.size();i++)
                    {
                        if(s[i]!='A')
                        c2.push('(');
                        else if(c2.size()>0)
                        c2.pop();
                    }
                    if(c2.size()==0)
                    cout<<"YES"<<endl;
                    else cout<<"NO"<<endl;
                }
        }
        else if(j==b)
        {
                stack<char>c1,c2;
                for(ll i=0;i<s.size();i++)
                {
                    if(s[i]=='B')
                    c1.push('(');
                    else if(c1.size()>0)
                    c1.pop();
                }
                if(c1.size()==0)
                cout<<"YES"<<endl;
                else
                {
                    for(ll i=0;i<s.size();i++)
                    {
                        if(s[i]!='B')
                        c2.push('(');
                        else if(c2.size()>0)
                        c2.pop();
                    }
                    if(c2.size()==0)
                    cout<<"YES"<<endl;
                    else cout<<"NO"<<endl;
                }
        }
        else
        {
                stack<char>c1,c2;
                for(ll i=0;i<s.size();i++)
                {
                    if(s[i]=='C')
                    c1.push('(');
                    else if(c1.size()>0)
                    c1.pop();
                }
                if(c1.size()==0)
                cout<<"YES"<<endl;
                else
                {
                    for(ll i=0;i<s.size();i++)
                    {
                        if(s[i]!='C')
                        c2.push('(');
                        else if(c2.size()>0)
                        c2.pop();
                    }
                    if(c2.size()==0)
                    cout<<"YES"<<endl;
                    else cout<<"NO"<<endl;
                }
        }
        }
    }

    return 0;
}

