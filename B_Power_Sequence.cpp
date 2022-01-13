#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///

        ll i,j,x=1000000000000000000,y,z,count=0,sum2=100000000000000000,n,sum1=0;
        cin>>n;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
        }

        sort(a,a+n);

        for(ll i=1;;i++)
        {
          ll  sum=0,count=1,sum1=0;
            for(ll j=0;j<n;j++)
            {
                sum+=abs(a[j]-count);
                count*=i;
                if(count>x)
                {
                    sum1=1;
                    break;
                }
                
            }
         if(sum1==1)
           break;
        
        sum2=min(sum2,sum);
        }
        cout<<sum2<<endl;

    return 0;
}

