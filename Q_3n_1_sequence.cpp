#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define debug cout<<"debug"<<endl;
#define heyyoo ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll i,j,x,y,z,c=0,sum=0,n,m;
ll f(ll n)
{
    if(n<=1)
    return 0;
     c++;
   
     if(n&1)
     return f(3*n +1);
     else return f(n/2);

}
int main()
{
     ///"Bismillahir Rahmanir Raheem"///

        heyyoo;
   
        cin>>n;
        f(n);
        cout<<c+1<<endl;

    return 0;
}

