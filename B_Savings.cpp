#include<bits/stdc++.h>
using namespace std; 

#define ll long long

int main()
{
        ll i,j,count=0,sum=0,n,m;
        cin>>n;
        ll low=0,high=1e9;
        while(low+1 < high)
        {
            ll mid=(low+high)/2;
            if((mid*(mid+1)/2) <n)
            low=mid;
            else high=mid;
        }
        cout<<high<<endl;

    return 0;
}

