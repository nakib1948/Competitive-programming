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
    ll i,j;
    map<char,ll>m;
    string s;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        m[s[i]]++;
    }
    for(auto x:m)
    {
        cout<<x.ff<<" : "<<x.ss<<endl;
    }
    return 0;
}
 