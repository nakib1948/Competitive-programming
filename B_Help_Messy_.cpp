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
        cin>>n;
        if(n%3 == 0)
        cout<<n-2<<" "<<1<<" "<<1<<endl;
        else if(n%3 ==2 ||n%3==1 )
        cout<<n-3<<" "<<2<<" "<<1<<endl;

    return 0;
}

