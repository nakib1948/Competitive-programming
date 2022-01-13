#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

ll check(ll x)
{
    ll count = 0;
    for(ll i=2; i*i<=x; i++)
    {
        if(x%i==0)
        {
            count++;
        }
    }
    if(count==0)
        return 1;
    else
        return -1;
}

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
     
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n;
        cin>>n;
        if(check(n)==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(n&1==1)
            {
                for(ll i=3;i<=sqrt(n);i+=2)
                {
                    if(n%i==0)
                    {
                        y=i;
                        n=n/i;
                        count++;
                        break;
                    }
                }
                for(ll i=3;i<=sqrt(n);i++)
                {
                    if(n%i==0&&i!=y)
                    {
                        z=i;
                        n=n/i;
                        count++;
                        break;
                    }
                }
                if((count==2)&&(z!=n)&&n!=1&&(y!=n))
                {
                    cout<<"YES"<<endl;
                    cout<<y<<" "<<z<<" "<<n<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
                

            }
            else
            {
                n=n/2;
                count=1;
                for(ll i=3;i<=sqrt(n);i++)
                {
                    if(n%i==0)
                    {
                        z=i;
                        n=n/i;
                        count++;
                        break;
                    }
                }
                if((count==2)&&(z!=n)&&(n!=1)&&(n!=2))
                {
                    cout<<"YES"<<endl;
                    cout<<"2"<<" "<<z<<" "<<n<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
                
            }
            
        }
        
    }


    return 0;
}

