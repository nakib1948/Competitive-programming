#include<bits/stdc++.h>
using namespace std; 

#define ll long long

int main()
{

    ll t;
    cin>>t;
    while(t--)
    {
       set<char>ch;
       ll count=-1;
       string s,w;
       cin>>s;
       w=s;
       bool ok=true;
       for(ll i=0;i<s.size();i++)
       {
           if(s[i]=='a' && count== -1)
           {
               count=i;
           }
           ch.insert(s[i]);
       }
       sort(w.begin(),w.end());
       for(ll i=0;i<w.size()-1;i++)
       {
           if(w[i]+1 != w[i+1]){
           ok=false;
           break;
           }
       }
       if(count== -1 || ch.size()!=s.size() || !ok)
       {
           cout<<"NO"<<endl;
       }
       else{
       
       for(ll i=0;i<count;i++)
       {
           if(s[i]<s[i+1])
           {
               ok=false;
               break;
           }
       }
       for(ll i=count;i<s.size()-1;i++)
       {
           if(s[i]>s[i+1])
           {
               ok=false;
               break;
           }
       }
       cout<<(ok ? "YES":"NO") <<"\n";
       }
    }


    return 0;
}

