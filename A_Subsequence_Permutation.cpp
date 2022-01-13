#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n;
        string s,w;
        cin>>s;
        w=s;
        sort(w.begin(),w.end());
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]!=w[i])
            count++;
        }
        cout<<count<<endl;
        
    }


    return 0;
}

