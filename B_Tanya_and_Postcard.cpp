#include<bits/stdc++.h>
using namespace std; 

#define bss ios::sync_with_stdio(false); cin.tie(0);
#define ll long long

ll gcd(ll a, ll b)
{
    return (b == 0 ? a : gcd(b, a % b));
}
 
ll lcm(ll a, ll b)
{
    return (a * (b / gcd(a, b)));
}


int main()
{ 
   
        ll i,c=0,s=0,n,c1=0,s1=0;
        string w,q;
        cin>>w>>q;
        map<char,ll>m,m1;

        for(ll i=0;i<w.size();i++)
        {
            m[w[i]]++;
        }

        for(ll i=0;i<q.size();i++)
        {
            m1[q[i]]++;
        }
        if(w.size()<q.size())
        {
            for(ll i=0;i<w.size();i++)
            {
                if(w[i]==q[i])
                {
                    s1++;
                }
                else
                {
                    c1++;
                }
                
            }
        }
        else
        {
             for(ll i=0;i<q.size();i++)
            {
                if(w[i]==q[i])
                {
                    s1++;
                }
                else
                {
                    c1++;
                }
                
            }
        }
        

        for(auto k:m)
        {
            ll t=0;
            for(auto l:m1)
            {
                if(k.first==l.first)
                {
                    t=1;
                    if(l.second<k.second)                 
                     {   c+=(k.second-l.second);
                        s+=l.second;
                     }
                    else
                    {
                        s+=k.second;
                    }
                }
            }
            
            if(t==0)
             c+=k.second;
        }
        
        if(s1>=s)
        {
            cout<<s1<<" "<<c1<<endl;
        }
        else 
        {
        cout<<s<<" "<<c<<endl;
        }

        return 0;
}

