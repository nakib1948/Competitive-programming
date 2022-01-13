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
        cin>>x>>y;
        string s="a";
        for(ll i=1;i<y;i++)
        {
            char ch=s[s.size()-1]+1;
            s+=ch;
        }
        count=x/y;
        sum=x%y;
        for(ll i=1;i<=count;i++)
        {
            cout<<s;
        }
        for(ll i=0;i<sum;i++)
        {
            cout<<s[i];
        }
        cout<<endl;



    return 0;
}

