#include<bits/stdc++.h>
using namespace std; 

#define ll long long

int main()
{

        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>m;
        string s;
        n=10;
        ll s1[n];
        cin>>s;
        memset(s1,0,sizeof(s1));
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='L')
            {
                for(ll j=0;j<n;j++)
                {
                    if(s1[j]==0)
                    {
                        s1[j]=1;
                        break;
                    }
                }
            }
            else if(s[i]=='R')
            {
                  for(ll j=n-1;j>=0;j--)
                {
                    if(s1[j]==0)
                    {
                        s1[j]=1;
                        break;
                    }
                }
            }
            else if(s[i]!='R' || s[i]!='L')
            {
                ll k=s[i]-'0';
                
                s1[k]=0;
            }
        }
       
        for(ll i=0;i<n;i++)
        {
            cout<<s1[i];
        }
        cout<<endl;
    return 0;
}

