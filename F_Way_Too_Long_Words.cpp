#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (i = 0; i < n; i++)

int main()
{
   ll t,i,l;
   string s;
   cin>>t;
   while(t--)
   {
       cin>>s;
       l=s.size();
       if(l<=10)
       {
           cout<<s<<endl;
 
       }
       else
       {
           cout<<s[0]<<l-2<<s[l-1]<<endl;
       }
 
 
   }
 
    return 0;
}