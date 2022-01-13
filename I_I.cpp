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
        ll i,j,x,y,z,count=0,n,k;
        cin>>n>>k;
        for(ll j=0;j<n;j++)
        {   
            ll sum=0;
            set<ll>st;
            string s;
            cin>>s;
            bool ok=true;
            for(ll i=0;i<s.size();i++)
            {
                ll l=s[i]-'0';
                if(l<=k)
                {
                    st.insert(l);
                }
                else if(l>k)
                {
                    ok=false;
                    break;
                }
                
            }
            if(ok)
            { 
                if(st.size()==k+1)
                 count++;
             
            }

        }
        cout<<count<<endl;


        return 0;
}

