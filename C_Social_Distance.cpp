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
     
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x=0,y,z,count=0,sum=0,n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        vector<ll>v;
      
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                v.pb(i+1);
                x=1;
            }
        }
        if(x==0)
        {
            if((n-2)>=m)
            cout<< 2+((n-2)/((2*m)+1))<<endl;
            else 
            cout<<1<<endl;
        }
        else{
        if(v[0]-2 >=m)
        {
            count++;
            count+=((v[0]-2)/((2*m)+1));
        }
        if((n-1-v[v.size()-1])>=m)
        {
            count++;
            count+=((n-1-v[v.size()-1])/((2*m)+1));
        }
        m=(2*m)+1;
        for(ll i=1;i<v.size();i++)
        {
            sum=v[i]-v[i-1]-1;
            count+=(sum/m);
        }
        cout<<count<<endl;
        }
    }


    return 0;
}

