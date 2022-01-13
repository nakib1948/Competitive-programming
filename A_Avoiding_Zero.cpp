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
        stack<ll>st,sc;
        vector<ll>v;
        ll a[n],b[n];
        rep(i,n)
        {
            cin>>a[i];
            b[i]=a[i];
        }
         if(n==1&&a[0]!=0)
        {
            cout<<"YES"<<endl;
            cout<<a[0]<<endl;
        }
        else if(n==1&&a[0]==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
        
        sort(b,b+n);
       
        for(ll i=0;i<n;i++)
        {
            if(a[i]==b[i])
            {
                count++;
            }
        }
       
        if(count==n)
        cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for(ll i=0;i<n/2;i++)
            {
                st.push(b[i]);
            }
            for(ll i=n/2;i<n;i++)
            {
                sc.push(b[i]);
            }
            while(1)
            {
                if((sc.top()+st.top()!=0)&&sc.size()>0&&st.size()>0)
                {
                    v.pb(sc.top());
                    v.pb(st.top());
                    sc.pop();
                    st.pop();
                }
               
                else if(sc.size()>0)
                {
                    v.pb(sc.top());
                    sc.pop();
                }
                if(st.size()==0||sc.size()==0)
                break;
            }
            for(auto x:v)
            {
                cout<<x<<" ";
            }
            if(sc.size()>0)
            {
                while(!sc.empty())
                {
                    ll k=sc.top();
                    cout<<k<<" ";
                    sc.pop();
                }
            }
            if(st.size()>0)
            {
                while(!st.empty())
                {
                    ll k=st.top();
                    cout<<k<<" ";
                    st.pop();
                }
            }
            cout<<endl;
        }
        
    }

    }
    return 0;
}

