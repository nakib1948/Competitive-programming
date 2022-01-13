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
        string s,s1;
        cin>>s>>s1;
        for(ll i=0;i<s.size();i++)
        {
            sum+=(s[i]-'0');
        }

        for(ll i=0;i<s1.size();i++)
        {
            count+=(s1[i]-'0');
        }

        cout<<max(sum,count)<<endl;


    return 0;
}

