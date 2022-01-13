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
      
        if(n==1)
        cout<<"0"<<endl;
        else{
        x=sqrt(n);
        if(n%x==0)
        cout<<((n/x)+(x-2))<<endl;
        else
        {
            cout<<(n/x)+(x-1)<<endl;
        }
        }

    }


    return 0;
}

