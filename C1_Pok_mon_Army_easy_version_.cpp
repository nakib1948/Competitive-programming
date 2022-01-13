#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep( i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
    
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j=0,x,y,z,count=0,sum1=0,n;
        cin>>n>>z;

        ll a[n];
        rep( i,n)
        {
            cin>>a[i];
        }
        while(j<n)
        {
           ll sum=a[j];
            for( ;j<n;j++)
            {
                if(sum<=a[j])
                {
                    sum=a[j];
                }
                else
                { 
                    break;
                }
                
            }
            sum1+=sum;
            sum=a[j];
            for( ;j<n;j++)
            {
                if(sum>=a[j])
                {
                    sum=a[j];
                }
                else
                {   sum1-=sum;
                    break;
                } 
            }
            
        }
        cout<<sum1<<endl;

   
    }


    return 0;
}

