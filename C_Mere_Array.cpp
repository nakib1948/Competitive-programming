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
        ll i,j,x,y,z,count=30,sum=0,n;
        cin>>n;
        ll a[n],b[n];
        rep(i,n)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        bool ok = true;
        rep(i,n)
        {
            if(a[i]!=b[i])
            {
                if(a[i]%b[0]==0)
                {
                    ok=true;
                }
                else
                {
                    ok=false;
                    break;
                }
                
            }
        }
        if(ok)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        

    }


    return 0;
}

