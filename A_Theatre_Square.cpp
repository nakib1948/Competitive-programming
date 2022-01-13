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
        cin>>x>>y>>z;
        
         if((z*z)>=(x*y))
        cout<<1<<endl;
        else{
        
        ll k=min(x,y),k1=max(x,y);
        x=k1,y=k;
        if(x%z != 0)
        {
            if((y-z)%z != 0)
            {
                //debug;
                cout<< 2*(x/z) + ((y-z)/z)*(x/z) + (y/z)+1<<endl;
            }
            else
            {
               //debug;
                cout<< (x/z) + ((y-z)/z)*(x/z) + (y/z)<<endl;
            }
            
        }
        else 
        {
            if((y-z)%z != 0)
            {
                // debug;
                cout<< 2*(x/z) + ((y-z)/z)*(x/z)<<endl;
            }
            else
            {
               // debug;
                cout<< (x/z) + ((y-z)/z)*(x/z)<<endl;
            }
        }
        }

    return 0;
}

