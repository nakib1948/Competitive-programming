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
     ///"In the name of Allah,most gracious and most merciful"///
     
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n;
        string s;
        cin>>n>>x>>y>>z>>s;
        ll x1=max(x,y);
        ll y1=min(x,y);
        if((x1==x) && (x1>(z+y1)))
        {
            for(ll i=0;i<s.size();i++)
            {
                if(s[i]=='0')
                 count++;
            }
            sum=s.size()-count;
            cout<< (sum*y1) + (count*(z+y1)) <<endl;
        }
        else if((x1==y) && (x1>(z+y1)))
        {
              for(ll i=0;i<s.size();i++)
            {
                if(s[i]=='1')
                 count++;
            }
            sum=s.size()-count;
            cout<< (sum*y1) + (count*(z+y1)) <<endl;
        }
        else
        {
              for(ll i=0;i<s.size();i++)
            {
                if(s[i]=='1')
                 count++;
                else 
                sum++;
            }
            cout<< (count*y) + (sum*x) <<endl;
        }
        
       
    }


    return 0;
}

