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
        ll i,j,x,y,z,count=0,sum1=0,sum=0,n,w,r,g,b;
        cin>>r>>g>>b>>w;
        if((r%2+g%2+b%2+w%2)==1)
        {
            cout<<"Yes"<<endl;
        }
        else if(r>0&&g>0&&b>0)
        {if(((r-1)%2+(g-1)%2+(b-1)%2+(w-1)%2)==1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        }
        
    }
       
    return 0;
}

