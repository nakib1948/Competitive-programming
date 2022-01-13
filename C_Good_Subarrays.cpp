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
        string s;
        cin>>s;
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                count++;
            }
        }
        x=0;y=0;
        sum=s[y]-'0';
        ll count1=0;
        while(x<=y&&y<s.size())
        {
            while((sum==(y+1-x)||sum==0)&&y+1<=s.size())
            {
                count1++;
                y++;
                sum+=s[y]-'0';
            }

            if((y+1-x)>sum)
            {
                while(sum!=(y+1-x)&&x<=y)
                {
                    sum-=s[x]-'0';
                    x++;
                }
            }
        }
        cout<<count1<<endl;
    }


    return 0;
}

