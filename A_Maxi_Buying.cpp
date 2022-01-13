#include<bits/stdc++.h>
using namespace std; 

#define ll long long

int main()
{
        ll i,j,count=0,sum=0,n,m;
        cin>>n;
        double x=1.08,y=1.0*n,z=206.0;
        if(floor(x*y) < floor(z))
        cout<<"Yay!"<<endl;
        else if(floor(x*y) > z)
        cout<<":("<<endl;
        else cout<<"so-so"<<endl;

    return 0;
}

