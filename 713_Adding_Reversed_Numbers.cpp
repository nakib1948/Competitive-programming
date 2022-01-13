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
        ll n,m;
        string s,w;
        cin>>s>>w;
        for(ll i=s.size()-1;i>=0;i--)
        {
            if(s[i]!='0')
            break;
            else 
            s.erase(i,1);
        }
        for(ll i=w.size()-1;i>=0;i--)
        {
            if(w[i]!='0')
            break;
            else 
            w.erase(i,1);
        }
        reverse(s.begin(),s.end());
        reverse(w.begin(),w.end());
        ll carry=0,k=0;
        if(s.size()>=w.size())
        {
            k=0;
        }
        else
        {
            string p=s;
            s=w;
            w=p;
        }
      
        string q="";
        m=w.size()-1;
        for(ll i=s.size()-1;i>=0;i--)
        {
           if(m>=0)
           {
               ll x=s[i]-'0';
               ll y=w[m]-'0';
               ll sum=x+y+carry;
               carry=0;
               if(sum<10)
               {
                   string a=to_string(sum);
                   q+=a;
               }
               else 
               {
                   string a=to_string(sum);
                   q+=a[1];
                   carry=a[0]-'0';
               }
               m--;
           }
           else
           {
               ll x=s[i]-'0';
               ll sum=x+carry;
               carry=0;
               if(sum<10)
               {
                   string a=to_string(sum);
                   q+=a;
               }
               else 
               {
                   string a=to_string(sum);
                   q+=a[1];
                   carry=a[0]-'0';
               }
           }
           
        }
        if(carry!=0)
        {
            string j=to_string(carry);
            q+=j;
        }
        for(ll i=0;i<q.size();i++)
        {
            if(q[i]!='0')
            break;
            else
            {
                q.erase(i,1);
                i--;
            }
        }
        cout<<q<<endl;
    }


    return 0;
}

