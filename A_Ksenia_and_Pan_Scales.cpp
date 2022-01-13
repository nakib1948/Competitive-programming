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
     
   
        ll i,j=0,x,y,z,count=0,sum=0,ans=0;
        string s,s1;
        cin>>s>>s1;
        vector<char>v,w,q;
        queue<char>qu;
      
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]!='|')
            { count++;w.pb(s[i]);}
            else   
             break;
        }
        for(ll i=s.size()-1;i>=0;i--)
        {
            if(s[i]!='|')
            { sum++;q.pb(s[i]);}
            else   
             break;
        }
        ll k=sum+count+s1.size();
        if(sum>(k/2) || count>(k/2) || k&1 )
        cout<<"Impossible"<<endl;
        else{
        for(ll i=0;i<s1.size();i++)
        {
            qu.push(s1[i]);
        }
        reverse(q.begin(),q.end());
            for(auto it:w)cout<<it;
            while(!qu.empty())
            {
                if(count==(k/2))
                break;

                cout<<qu.front();
                qu.pop();
                count++;
            }
           cout<<"|";
           for(auto it:q)cout<<it;
           while(!qu.empty())
           {
               cout<<qu.front();
               qu.pop();
           }
           cout<<endl;
            
        }   


    return 0;
}

