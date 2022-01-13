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
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,m;
        string s;
        cin>>s;
        map<char,ll>mp;
        for(ll i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        for(auto it:mp)
        {
            if(it.ss==1)count++;
            if(it.ss%2==0)sum++;
        }
        if(s.size()==1)
        cout<<"NO"<<endl;
        if(count<=sum)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }


    return 0;
}

