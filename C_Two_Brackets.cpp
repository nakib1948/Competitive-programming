#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
     
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n;
        stack<char>st,st1;
        string s;
        cin>>s;
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            st.push(s[i]);
            else if(s[i]=='[')
            st1.push(s[i]);

            if(!st.empty() && s[i]==')')
            {
                st.pop();
                count++;
            }
            if(!st1.empty() && s[i]==']')
            {
                st1.pop();
                count++;
            }
           
        }
        cout<<count<<endl;
    }


    return 0;
}

