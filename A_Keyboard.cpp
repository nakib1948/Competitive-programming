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
   
        ll i,j,x,y,z,count=0,sum=0,n,m;
        char ch;
        cin>>ch;
        string s,s1="qwertyuiop[asdfghjkl;zxcvbnm,./";
        cin>>s;
        if(ch=='L')
        {
            for(ll i=0;i<s.size();i++)
            {
                for(ll j=0;j<s1.size();j++)
                {
                    if(s[i]==s1[j])
                    {
                        s[i]=s1[j+1];
                        break;
                    }
                }
            }
            cout<<s<<endl;
        }
        else
        {
             for(ll i=0;i<s.size();i++)
            {
                for(ll j=0;j<s1.size();j++)
                {
                    if(s[i]==s1[j])
                    {
                        s[i]=s1[j-1];
                        break;
                    }
                }
            }
            cout<<s<<endl;
        }


    return 0;
}

