#include<bits/stdc++.h>
using namespace std; 

#define ll long long

int main()
{
    
        ll i,j,count=0,sum=0,n,m;
       
       vector<ll>v={1,2,3,4,5};
       auto it=lower_bound(v.begin(),v.end(),6);
       if(it==v.end())
       it--;

       cout<<*it<<endl;


    return 0;
}

