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
    cin>>s;
    if(s.size()==1)
    cout<<0<<endl;
    else
    {
        count=s.size()-1;
        count/=2;
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='1')sum++;
        }
        if(sum>1)
        cout<<count+1<<endl;
        else cout<<count<<endl;
    }
    return 0;
}

