#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define debug cout<<"debug"<<endl;

int main()
{
    set<string>v;
    string s;
    while(cin>>s)
    {
        string w="";
        for(ll i=0;i<s.size();i++)
        {
          
        if(s[i]>='A'&&s[i]<='Z')
        {
            s[i]= tolower(s[i]);
            w+=s[i];
        }
        else if(s[i]>='a' && s[i]<='z') 
            w+=s[i];
    
        }
      
        v.insert(w);
    }
    for(auto it:v)
    {
        cout<<it<<endl;
    }
    return 0;
}

