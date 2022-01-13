#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define debug cout<<"debug"<<endl;
#define heyyoo ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main()
{
     ///"Bismillahir Rahmanir Raheem"///

       heyyoo;
   
        ll i,j,x,y,z,count=0,sum=0,n;
        string s,w;
        cin>>s>>w;
        map<char,ll>m,m1;
        for(ll i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        for(ll i=0;i<w.size();i++)
        {
            m1[w[i]]++;
        }
        if(s.size()==w.size())
        {
            sort(s.begin(),s.end());
            sort(w.begin(),w.end());
            if(s==w)
            cout<<"array"<<endl;
            else 
            cout<<"need tree"<<endl;
        }
        else{
        j=0;
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]==w[j])
            {
                count++;
                j++;
            }
        }
        if(count==w.size() && s.size()>w.size())
        cout<<"automaton"<<endl;
        else
        {
            bool ok=true;
            for(ll i=0;i<w.size();i++)
            {
                if(m1[w[i]]>m[w[i]])
                {
                    ok=false;
                    break;
                }
            }
            cout<<(ok ? "both":"need tree")<<endl;
        }
        
        }
    return 0;
}

