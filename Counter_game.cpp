#include<bits/stdc++.h>
using namespace std; 

#define ll long long

int main()
{
     
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,s=0,n,L=0,R=0;
        cin>>n;
       
        while(n!=1)
        {
           if((n&n-1)==0)
           {
               n=n>>1;
               count++;
           }
           else
           {
               s=log2(n);
               ll x=1ULL << s;
               n=n-x;
               count++;
           }
           
        }
        if(count%2==0)
        cout<<"Richard"<<endl;
        else 
        cout<<"Louise"<<endl;
        
 }
    return 0;
}

