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
        stack<char>ch;
        string s;
        cin>>s;
        ch.push(s[0]);
        for(i=1;i<s.size();i++)
        {
            if(ch.size()==0)
            {
                ch.push(s[i]);
                continue;
            }
            if(s[i]==ch.top())
            {
                ch.push(s[i]);
            }
            else
            {
                count++;
                ch.pop();
            }
            
        
        }
        //cout<<count<<endl;
        if(count%2==0)
         cout<<"NET"<<endl;
         else
         {
             cout<<"DA"<<endl;
         }
         
    }


    return 0;
}

