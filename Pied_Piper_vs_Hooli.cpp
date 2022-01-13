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
        ll i,j,a,b,x,y,z,count=0,sum=0,n;
        cin>>n>>a>>b>>x>>y>>z;
        priority_queue<ll>qu;
        ll v[n];
        rep(i,n)
        {
            cin>>v[i];
            qu.push(v[i]);
        }

        j=z-b;
        ll k=ceil(double(j)/double(y));
        ll l=k-1;
        ll ans=l*x;
        if((ans+a)>=z)
         cout<<"0"<<endl;
        else
        {
            ans+=a;
            while(qu.top()!=0)
            {
                ll k=qu.top();
                
                ans+=k;
                count++;
                qu.pop();
                qu.push(k/2);
                
                
                if(ans>=z)
                 break;
                
            }
            if(ans<z)
             cout<<"RIP"<<endl;
            else
            {
                cout<<count<<endl;
            }
            

        }
    }


    return 0;
}

