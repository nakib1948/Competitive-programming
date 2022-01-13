#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll i;
        string s;
        cin>>s;
        stack<char>st;
        for(i=0;i<s.size();i++)
        {
             if(s[i]=='(')
             st.push('(');
             else if(s[i]==')')
             st.push(')');
        }
        if(st.top()=='(' && s.size()%2 == 0)
        cout<<"YES"<<endl;
        else
        {
            cout<<"NO"<<endl;
        }
    }


    return 0;
}


