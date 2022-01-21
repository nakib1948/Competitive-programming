#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
        ll n,l,a1,count=1,sum=1;
        
        cin>>n;
        vector<ll>v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(ll i=0;i<n-1;i++)
        {
           if(v[i]*2>=v[i+1])
           {
               sum++;
               count=max(count,sum);
           }
           else {
              
               count=max(count,sum);
               sum=1;
           }
        }
        cout<<count<<endl;
       
        return 0;
}
