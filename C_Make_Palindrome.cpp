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
        string s;
        map<char,ll>mp;
    
        cin>>s;
        sort(s.begin(),s.end());
        for(i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        
        for(auto l:mp)
        {
            if(l.ss&1==1)
             count++;
        }
        if(count==1)
        {
            string q,w,r;
            for(auto l:mp)
            {
                if(l.ss&1==1)
                {
                    w+=l.ff;
                }
                for(ll i=1;i<=(l.ss/2);i++)
                {
                        q+=l.ff;
                }
            }
            r=q;
            q+=w;
            reverse(r.begin(),r.end());
            cout<<q+r<<endl;

        }

        else if(count&1==0)
        {
            string q,w,r;
            for(auto l:mp)
            {
                for(ll i=1;i<=(l.ss/2);i++)
                {
                        q+=l.ff;
                }
            }

            for(ll j=1;j<=(count/2);j++)
            {
                q+=q[q.size()-1];
            }
            r=q;
            reverse(r.begin(),r.end());
            cout<<q+r<<endl;
        }

        else if(count&1==1)
        {
            
        }

    return 0;
}

