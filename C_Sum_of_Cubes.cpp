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

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///

    heyyoo;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n;
        cin>>n;
        for(ll i=1;i<=10000;i++)
        {
           sum=n-(i*i*i);  
           if(sum<=0)  continue;
           else{
           sum=cbrt(sum);
           if(((sum*sum*sum)+(i*i*i))==n || (i*i*i+i*i*i)==n)
           {
               count=1;
               break;
           }
           }
        }
        if(count==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


    return 0;
}

