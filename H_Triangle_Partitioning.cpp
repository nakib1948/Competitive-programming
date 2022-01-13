#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define debug cout<<"debug"<<endl;

int main()
{
    ll t;
    cin>>t;
    ll i,j,x,y,z,count=0,sum=0,n;
    double AB,BC,AC,AD,r;
    for(i=1; i<=t; i++)
    {
        scanf("%lf%lf%lf%lf",&AB,&AC,&BC,&r);
        r=r/(r+1);
        AD=AB*sqrt(r);
        printf("Case %d: %lf\n",i,AD);
    }



    return 0;

}