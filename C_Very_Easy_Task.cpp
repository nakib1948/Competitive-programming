#include<bits/stdc++.h>
using namespace std; 

#define ll long long


int main()
{
    
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n>>m>>z;
        x=max(m,z);
        y=min(m,z);
        ll low=-1,high=x*n;
        while(low+1<high)
        {
            ll mid=(low+high)/2;
            sum=mid/y;
            count=mid/x;
            if((sum+count) >=n-1)
            high=mid;
            else 
            low=mid;
        }
        cout<<high+y<<endl;
     
    return 0;
}

