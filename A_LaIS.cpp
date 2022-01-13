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
    string s;
    map<char,int>mp;
    cin>>n>>s;
    for(i=0;i<s.size();i++)
    {
        mp[s[i]]++;
    }
    if(n==1)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    for(auto it:mp)
    {
        if(it.ss>=2)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}

