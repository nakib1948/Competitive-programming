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
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n;
        cin>>n;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
        }

            count=a[0]+a[1];
            for(j=2;j<n;j++)
            {
                if(count<=a[j])
                {
                    cout<<"1"<<" "<<"2"<<" "<<j+1<<endl;
                    sum=1;
                    break;
                }
            }
        
        if(sum==0)
        {
            cout<<"-1"<<endl;
        }
    }


    return 0;
}


