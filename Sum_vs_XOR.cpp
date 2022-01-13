#include<bits/stdc++.h>
using namespace std; 

#define ll long long

int main()
{
    
        ll i,j,x,y,z,count=0,sum=0,n;
        cin>>n;
        if(n==0)
        cout<<1<<endl;
        else{
        while(n)
        {
            if((n&1)==0)
            {
                count++;
            }
            n=n>>1;
        }
        
        cout<<(1LL<<count)<<endl;
        }

    return 0;
}

