#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (i = 0; i < n; i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        stack<char>ch;
        bool ok=true;
        cin>>s;
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='('||s[i]=='[')
            {
                ch.push(s[i]);
            }
            else if(s[i]==')')
            {
                 if(ch.size()>0&&ch.top()=='(')
                {
                    ch.pop();
                }
                else
                {
                    ok=false;
                    break;
                }
               
            }
          
             else if(s[i]==']')
            {
                 if(ch.size()>0&&ch.top()=='[')
                {
                    ch.pop();
                }
                else
                {
                    ok=false;
                    break;
                }
            }
        }
        if(ch.size()>0)
         ok=false;
        if(ok)
          cout<<"Yes"<<endl;
        else
        {
            cout<<"No"<<endl;
        }
        
    }

    return 0;
}
