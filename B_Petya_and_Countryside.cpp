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
 
        ll i,j,x,y,z,count=0,sum=0,n;
        cin>>n;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
        }
        for(ll i=0;i<n;i++)
        {
            count=1;
            for(ll j=i+1;j<n;j++)
            {
                if(a[j]<=a[j-1])
                count++;
                else 
                break;
            }
            for(ll j=i-1;j>=0;j--)
            {
                if(a[j]<=a[j+1])
                count++;
                else 
                break;
            }
            sum=max(sum,count);
            count=0;
        }

        cout<<sum<<endl;

    return 0;
}

