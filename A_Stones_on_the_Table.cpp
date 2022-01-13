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
        cin>>n>>s;
        
        for(ll i=0;i<s.size()-1;)
        {
            if(s[i]==s[i+1])
            {
                s.erase(i,1);
               
            }
            else i++;
        }
        cout<<n-s.size()<<endl;

    return 0;
}

