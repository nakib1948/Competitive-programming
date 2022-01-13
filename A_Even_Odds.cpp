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
        cin>>n>>m;
        if(n&1)
        {
           if(m<=((n/2)+1))
            {
                cout<<(2*m)-1<<endl;
            }
            else 
            {
                m-=((n/2)+1);
                cout<<2*m<<endl;
            }
        }
        else 
        {
             if(m<=n/2)
            {
                cout<<(2*m)-1<<endl;
            }
            else
            {
                
                m-=n/2;
                cout<<2*m<<endl;
            }

        }
      

    return 0;
}

