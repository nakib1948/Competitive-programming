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
        stack<ll>st;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
        }
        st.push(a[0]);
        for(ll i=1;i<n-1;i++)
        {
            if(a[i]<st.top())
            {
                st.push(a[i]);
                if(a[i+1]>a[i])
                {
                    st.pop();
                }
            }
        }
        
        if(st.top()<a[n-1])
        {
            count=0;
        }
        else
        {
            st.push(a[n-1]);
        }
        cout<<(st.size()==1?"YES":"NO")<<endl;
        
    }


    return 0;
}

