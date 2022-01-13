#include<bits/stdc++.h>
using namespace std; 
 
#define bss ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
 
ll gcd(ll a, ll b)
{
    return (b == 0 ? a : gcd(b, a % b));
}
 
ll lcm(ll a, ll b)
{
    return (a * (b / gcd(a, b)));
}
 
 
int main()
{
     
    bss;
    ll q;
    cin>>q;
    while(q--)
    {
        ll i,c=0,s=0,n;
        cin>>n;
 
      if(n==1)
      cout<<9<<endl;
      else if(n==2)
      cout<<98<<endl;
      else if(n==3)
      cout<<989<<endl;
      else 
      {
          cout<<9;
          s=8;
         for(i=0;i<n-1;i++)
        {
           cout<<s;
           if(s<9) s++;
           else  s=0; 
        }
       
        cout<<endl;
      }
      
    }
 
 
    return 0;
}
 