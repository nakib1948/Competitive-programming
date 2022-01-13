#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define debug cout<<"debug"<<endl;

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
     
  
        ll i,j,x=0,y,z,count=0,sum=0,n,m;
        cin>>n;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        if(n<3)
        cout<<0<<endl;
        else 
        {
            for(ll i=1;i<n;i++)
            {
                if(a[i]==a[i-1])
                count++;
                else 
                {
                    x=i;
                    break;
                }  
            }
            for(ll i=n-2;i>=x;i--)
            {
                if(a[i]==a[i+1])
                count++;
                else 
                break;
            }
            if((n-2-count)<=0)
            cout<<0<<endl;
            else 
            cout<<n-2-count<<endl;
        }

    return 0;
}

