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
        for(ll i=1;;i++)
        {
            z=x;
            z=z*i;
            if(z%10==0)
            {
                cout<<i<<endl;
                break;
            }
            else if((((z/10)*10)+y)==z)
            {
                    cout<<i<<endl;
                    break;
            }
        
        }

    return 0;
}
