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
        ll i,j,one=0,two=0,zero=0,count=0,sum=0,n;
        cin>>n;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
            if(a[i]%3==0)
            zero++;
            else if(a[i]%3==1)
            one++;
            else 
            two++;
        }
        n/=3;
        vector<ll>v;
        v.pb(one);v.pb(two);v.pb(zero);
        sort(v.begin(),v.end());
        if(v[2]==zero && v[0]==one)
        {
           ll k=0,k1=0;
           if(v[1]<=n)
           {
                k=(n-v[1])*2;
                k1=n-v[0];
                cout<<k+k1<<endl;
           }
           else if(v[1]>n)
           {
                k=(v[1]-n)*2;
                k1=v[2]-n;
                cout<<k+k1<<endl;
           }
           
        }
        else if(v[2]==zero && v[0]==two)
        {
           ll k=0,k1=0;
           if(v[1]<=n)
           {
                k=(n-v[1]);
                k1=(n-v[0])*2;
                cout<<k+k1<<endl;
           }
           else if(v[1]>n)
           {
                k=(v[1]-n);
                k1=(v[2]-n)*2;
                cout<<k+k1<<endl;
           }
        }
        else if(v[2]==two && v[0]==one)
        {
           ll k=0,k1=0;
           if(v[1]<=n)
           {
                k=(n-v[1]);
                k1=(n-v[0])*2;
                cout<<k+k1<<endl;
           }
           else if(v[1]>n)
           {
                k=(v[1]-n);
                k1=(v[2]-n)*2;
                cout<<k+k1<<endl;
           }
        }
        else if(v[2]==two && v[0]==zero)
        {
           ll k=0,k1=0;
           if(v[1]<=n)
           {
                k=(n-v[1])*2;
                k1=(n-v[0]);
                cout<<k+k1<<endl;
           }
           else if(v[1]>n)
           {
                k=(v[1]-n)*2;
                k1=(v[2]-n);
                cout<<k+k1<<endl;
           }
        }
        else if(v[2]==one && v[0]==two)
        {
           ll k=0,k1=0;
           if(v[1]<=n)
           {
                k=(n-v[1])*2;
                k1=(n-v[0]);
                cout<<k+k1<<endl;
           }
           else if(v[1]>n)
           {
                k=(v[1]-n)*2;
                k1=(v[2]-n);
                cout<<k+k1<<endl;
           }
        }
        else if(v[2]==one && v[0]==zero)
        {
           ll k=0,k1=0;
           if(v[1]<=n)
           {
                k=(n-v[1]);
                k1=(n-v[0])*2;
                cout<<k+k1<<endl;
           }
           else if(v[1]>n)
           {
                k=(v[1]-n);
                k1=(v[2]-n)*2;
                cout<<k+k1<<endl;
           }
        }
      
    }


    return 0;
}

