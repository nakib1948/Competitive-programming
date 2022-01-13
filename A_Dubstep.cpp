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
     ///"In the name of Allah,most gracious and most merciful"///
     

        ll i,j,x,y,z,count=0,sum=0,n,m;
        string s,w="WUB",p;
        vector<string>v;
        cin>>s;
        
        for(ll i=0;i+3<=s.size();i++)
        {
            string q=s.substr(i,3);
            if(q==w)
            {
                count++;
                x=i+2;
                if(p.size()!=0)
                {
                    v.pb(p);
                    p.clear();
                }
                i+=2;
            }
            else 
            {
                p+=s[i];
            }
        }
        p.clear();
        for(ll i=x+1;i<s.size();i++)
        {
            p+=s[i];
        }
        if(p.size()!=0)v.pb(p);
        if(count==0)cout<<s<<endl;
        else{
        for(ll i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        }

    return 0;
}

