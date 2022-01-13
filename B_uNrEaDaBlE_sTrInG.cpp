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
     ///"In the name of Allah,most gracious and most merciful"///

       heyyoo;
    
        ll i,j,x,y,z,count=0,sum=0,n,m;
        string s,w;
       
        cin>>s;
         w=s;
        for(ll i=0;i<s.size();i+=2)
        {
          s[i]=tolower(s[i]);
            
        }
        for(ll i=1;i<s.size();i+=2)
        {
          s[i]=toupper(s[i]);
            
        }
        if(s==w)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    


    return 0;
}

