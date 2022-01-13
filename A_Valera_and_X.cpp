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
        cin>>n;
        char a[n][n];
        set<char>s;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        for(ll i=0;i<n;i++)
        {
            s.insert(a[i][i]);
            s.insert(a[i][n-1-i]);
            a[i][i]='.';
            a[i][n-1-i]='.';
           
        }
        if(s.size()==1)
        {
            auto it=s.begin();
            bool ok=true;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            {
                if(a[i][j]!='.')
                {
                    if(a[i][j]==*it)
                    {
                        ok=false;
                        break;
                    }
                    else 
                    {
                        s.insert(a[i][j]);
                    }
                }
                
            }
        }
         if(ok)
         {
             cout<<(s.size()==2 ? "YES":"NO");
         }
         else 
         cout<<"NO"<<endl;
        }
        else 
        cout<<"NO"<<endl;


    return 0;
}

