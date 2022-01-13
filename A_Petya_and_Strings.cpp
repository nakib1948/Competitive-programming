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
   
        ll i,j,x,y,z,count=0,sum=0,n;
        string s,s1,w,q;
       
        vector<string>v;
        cin>>s>>s1;
       
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
            s[i]=s[i] + 32;
            if(s1[i]>='A'&&s1[i]<='Z')
            s1[i]=s1[i] + 32;
        }
         if(s>s1)cout<<1<<endl;
        else if(s==s1)cout<<0<<endl;
        else cout<<-1<<endl;
      /*  if(s==s1)
        {cout<<0<<endl;return 0;}
         w=s,q=s1;
        v.pb(s),v.pb(s1);
        sort(v.begin(),v.end());
        if(s==v[0])cout<<-1<<endl;
        else cout<< 1 <<endl;*/


    return 0;
}

