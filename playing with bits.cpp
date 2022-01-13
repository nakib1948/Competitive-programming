#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
ll countbit(ll x)
{
    ll count  =0;
  while(x>0)
  {
    count=count+(x&1);
    x=x>>1;

  }
  return count;

}
int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,sum=0,n,m;
        cin>>n>>m;
        
        for(i=n;i<=m;i++)
        {
          if(n&1==0&&i<m)
          {

            sum=sum+(2*countbit(n)+1);
            i++;
            continue;

          }
          sum=sum+countbit(i);


        }
        cout<<sum<<endl;
    }


    return 0;
}
