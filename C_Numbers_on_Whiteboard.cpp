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
        stack<ll>st;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            st.push(i);
        }
        cout<<"2"<<endl;
        while(st.size()>1)
        {
            ll k=st.top();
            st.pop();
            ll l=st.top();
            st.pop();
            cout<<k<<" "<<l<<endl;
            ll q=ceil((double)(k+l)/(double)(2));
            st.push(q);
        }
        
    }


    return 0;
}

