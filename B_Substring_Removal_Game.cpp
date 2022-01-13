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
        string s;
        cin>>s;
       vector<ll>v;
        for(i=0;i<s.size();i++)
        {
            count=0;
            if(s[i]== '1')
            {
                count=1;
                for(j=i+1;j<s.size();j++)
                {
                    if(s[j]=='1')
                    {
                        count++;
                        i++;
                    }
                    else
                    {
                    
                        break;
                    }
                    
                }
            }
             v.pb(count);
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        for(i=0;i<v.size();i+=2)
        {
            sum=sum+v[i];
        }
        cout<<sum<<endl;
    }


    return 0;
}


