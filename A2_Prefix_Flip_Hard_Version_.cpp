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
        ll i,j,x,y,z,count=30,sum=0,n;
        cin>>n;
        string s1,s2;
        char s[3];
        char c;
        cin>>s1>>s2;
        x=s1.size();
        y=s2.size();
        vector<ll>v;

        if(s1[x-1]=='0')
        {
            s[0]='0';
        }
        else
        {
            s[0]='1';
        }
        
        for(i=s2.size()-1;i>=0;i--)
        {
            if(s2[i]==s[0])
            {
                x--;
            }
            else if(s2[i]=='1'&&s[0]=='0')
            {
                sum++;
                v.pb(i+1);
                s1[i]='1';
                s[0]='1';
            }

             else if(s2[i]=='0'&&s[0]=='1')
            {
                sum++;
                v.pb(i+1);
                s1[i]='0';
                s[0]='0';
            }

        }
        cout<<s1<<endl;
        cout<<sum<<endl;
        for(ll i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }


    return 0;
}

