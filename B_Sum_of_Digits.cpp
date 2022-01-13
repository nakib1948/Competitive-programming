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
     
        ll i,j,x,y,z,count=0,sum=0,n;
        string s;
        cin>>s;
        while(s.size()!=1)
        {
            sum=0;
            for(ll i=0;i<s.size();i++)
            {
                sum+=(s[i]-'0');
            }
            string w=to_string(sum);
            s=w;
            count++;
        }cout<<count<<endl;


    return 0;
}

