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
        ll i,j,x,y,z,a,b,c,count=0,sum=0,n;
        cin>>x>>y>>z>>a>>b>>c;
        if(z>b) 
        {
            z=z-b;
            sum+=b*2;
            if(x>=c)
            {
                cout<<sum<<endl;
            }
            else
            {
                c=c-x;
                if(z>=c)
                {
                    cout<<sum<<endl;
                }
                else
                {
                    c=c-z;
                    sum-=(c*2);
                    cout<<sum<<endl;
                }
                
            }

            
        }
        else
        {
            sum+=2*z;
             if(x>=c)
            {
                cout<<sum<<endl;
            }
            else
            {
                c=c-x;
                sum-=(2*c);
                cout<<sum<<endl;
        }
        }

    }


    return 0;
}

