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
        cin>>n;
        ll a[2*n],b[2*n]={};
 
        for(i=0;i<(2*n);i++)
        {
            cin>>a[i];
            if(b[a[i]]==0)
            {
                cout<<a[i]<<" ";
                b[a[i]]=1;
            }
        }
        cout<<endl;
       
    }


    return 0;
}

