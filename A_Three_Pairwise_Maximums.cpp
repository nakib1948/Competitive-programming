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
        cin>>x>>y>>z;
        if(x==y&&y==z&&x==z)
        {
            cout<<"YES"<<endl;
            cout<<x<<" "<<x<<" "<<x<<endl;
        }
        else if(x==z&&y<x)
        {
            cout<<"YES"<<endl;
            cout<<x<<" "<<y<<" "<<y<<endl;
        }
        else if((x==z&&y>x)||(y==z&&x>y)||(x==y)&&z>x)
        cout<<"NO"<<endl;

        else if(x!=y&&x!=z&&y!=z)
        cout<<"NO"<<endl;

        else if(x==y&&z<x)
        {
            cout<<"YES"<<endl;
            cout<<z<<" "<<x<<" "<<z<<endl;
        }

        else if(y==z&&x<y)
        {
            cout<<"YES"<<endl;
            cout<<x<<" "<<x<< " "<<z<<endl;
        }
    }


    return 0;
}

