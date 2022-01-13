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
        ll i,j,x,y,z,count=0,sum=0,n,sum1=0,sum2=0,ans=0;
        cin>>n;
        string s;
        vector<string>v;
        cin>>s;
        for(i=0;i+n<=s.size();i++)
        {
           string w= s.substr(i,n);
           v.push_back(w);
        }

        for(ll i=0;i<v.size();i++)
        {
           string q=v[i];
           count=0;
           sum=0;
           for(ll j=0;j<q.size();j++)
           {
               if(q[j]=='1')
               {
                   count=1;
               }
               if(q[j]=='0')
               {
                   sum=1;
               }
           }
           if(count==1)
             sum1++;
            if(sum==1)
            sum2++;
             
        }
        if(sum1==v.size())
        {
            for(ll i=0;i<n;i++)
            {
                cout<<"1";
            }
            cout<<endl;
        }
        else if(sum2==v.size())
        {
            for(ll i=0;i<n;i++)
            {
                cout<<"0";
            }
            cout<<endl;
        }

       
    }


    return 0;
}

