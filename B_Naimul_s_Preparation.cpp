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

        cin>>m>>n;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum>m)
        cout<< -1 <<endl;
        else if(sum==m)
        cout<<0<<endl;
        else
        {
            cout<<m-sum<<endl;
        }
        
    

    return 0;
}

