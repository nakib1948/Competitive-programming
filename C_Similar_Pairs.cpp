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
        vector<ll>v,v1;
        rep(i,n)
        {
            cin>>a[i];
            if(a[i]%2==0)
            {
                count++;
                v.pb(a[i]);
            }
            else
            {
                sum++;
                v1.pb(a[i]);
            }
            
        }

        sort(a,a+n);
        if((count%2==0)&&(sum%2==0))
        {
            cout<<"YES"<<endl;
        }
        else if((count%2==1)&&(sum%2==1))
        {
            bool ok=true;
            for(ll i=0;i<v.size();i++)
            {
                for(ll j=0;j<v1.size();j++)
                {
                    if(abs(v[i]-v1[j])==1){
                    ok=false;
                    break;
                    }
                }
            }
            if(!ok)
            cout<<"YES"<<endl;
            else
            {
                cout<<"NO"<<endl;
            }
            

        }

    }


    return 0;
}

