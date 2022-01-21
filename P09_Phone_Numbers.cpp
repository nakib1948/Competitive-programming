#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
        ll n,l,a1,count=0;
        string s;
        cin>>n>>s;
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='8')
            count++;
        }
        a1=n/11;
        if(count>a1)
        cout<<a1<<endl;
        else cout<<count<<endl;


        return 0;
}
