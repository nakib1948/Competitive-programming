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
     ///"Bismillahir Rahmanir Raheem"///

    heyyoo;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n;
        string s,w;
        cin>>s; 
        w=s;
        reverse(w.begin(),w.end());
        if(w!=s)
        {
            cout<<"YES"<<endl;
             for(ll i=0;i<(s.size()/2);i++)
             cout<<s[i];
             cout<<"a";
              for(ll i=s.size()/2;i<s.size();i++)
              cout<<s[i];
              cout<<endl;
        }
        else{
      
            if(s[0]!='a')
            {
                cout<<"YES"<<endl;
                cout<<s<<"a"<<endl;
            }
            else{
               for(ll i=1;i<(s.size()/2);i++)
               {
                   if(s[i]!='a')
                   {
                       count=1;
                       cout<<"YES"<<endl;
                       for(ll j=0;j<i;j++)
                       cout<<s[j];

                       cout<<"a";

                       for(ll j=i;j<s.size();j++)
                       cout<<s[j];
                       cout<<endl;
                       break;
                   }
               }
               if(count==0)
               {
                   if(s.size()%2 == 0)
                   cout<<"NO"<<endl;
                   else
                   {
                       if(s[s.size()/2]=='a')
                       cout<<"NO"<<endl;
                       else
                       {
                             cout<<"YES"<<endl;
                            for(ll i=0;i<(s.size()/2);i++)
                            cout<<s[i];
                            cout<<"a";
                            for(ll i=s.size()/2;i<s.size();i++)
                            cout<<s[i];
                            cout<<endl;
                       }
                       
                   }
                   
               }
            }

        }
    }


    return 0;
}

