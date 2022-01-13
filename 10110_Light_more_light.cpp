#include<bits/stdc++.h>
using namespace std; 

#define ll long long

int main()
{
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n;
        while(n!=0)
        {
            count=sqrt(n);
            count*=count;
            if(count== n)
            cout<<"yes"<<endl;
            else 
            cout<<"no"<<endl;
            cin>>n;
        }


    return 0;
}

