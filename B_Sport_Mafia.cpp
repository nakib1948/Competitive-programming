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
    ll low=0,high=x;
    while(low<=high)
    {
        ll mid=(low+high)/2;
        z=x-mid;
        sum=(z*(z+1))/2;
        if(sum== (mid+y))
        {
           cout<<mid<<endl;
           return 0;
        }

        if((sum-mid)<y)
        high=mid-1;
        else 
        low=mid+1;
    }
    
   

    return 0;
}

