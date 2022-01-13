#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define debug cout<<"debug"<<endl;
ll i,j,x,y,z,c=-1e10,sum=0,n,m,a[100005];
void f(ll x)
{
    if(x==n)return;
    a[x]=max(c,a[x]);
    c=max(c,a[x]);
    f(x+1);
}
int main()
{
     ///"Bismillahir Rahmanir Raheem"///

        cin>>n;
        rep(i,n)
        {
            cin>>a[i];
        }
        f(0);
        rep(i,n) cout<<a[i]<<" ";
        cout<<endl;
 
    return 0;
}

