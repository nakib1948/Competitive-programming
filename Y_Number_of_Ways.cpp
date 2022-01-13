#include<bits/stdc++.h>
using namespace std; 

#define ll long long

#define heyyoo ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll i,j,x,y,z,ans=0,c=0,sum=0,n,m;
void f(ll x,ll y)
{
    if(x>y)return;
    if(x==y)
    {
        ans++;
        return;
    }
    if(x<y) f(x+1,y);
    if(x<y)f(x+2,y);
    if(x<y) f(x+3,y);

}
int main()
{
     ///"Bismillahir Rahmanir Raheem"///

        heyyoo;

        cin>>n>>m;

        f(n,m);
        cout<<ans<<endl;
        

    return 0;
}

