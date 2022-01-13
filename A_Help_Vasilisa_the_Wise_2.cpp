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
     
 
        ll i,j,x,y,z,count=0,sum=0,n,m,a,b;
        cin>>x>>y>>n>>m>>a>>b;
        if(x>17 || y>17 || n>17 || m>17 || a>17 || b>17)
        cout<< -1 <<endl;

        else{

        for(ll i=1;i<=x;i++)
        {
            ll k=abs(x-i);
            for(ll j=1;j<=y;j++)
            {
              
                ll k1=abs(y-j);
                if((i+j)==n && (k+k1)==m && (i+k1)==a && (j+k)==b)
                {
                    set<ll>s;
                    s.insert(i);
                    s.insert(k);
                    s.insert(j);
                    s.insert(k1);
                    if(s.size()==4)
                    {
                        cout<<i<<" "<<k<<endl<<j<<" "<<k1<<endl;
                        return 0;
                    }
                }
                
            }
        }
         
        cout<< -1 <<endl;
        }

    return 0;
}

