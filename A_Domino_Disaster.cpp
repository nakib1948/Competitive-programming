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
        string s;
        cin>>s;
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='U')
            cout<<"D";
            else if(s[i]=='D')
            cout<<"U";
            else if(s[i]=='L')
            cout<<"L";
            else cout<<"R";
        }
        cout<<endl;
    }


    return 0;
}

