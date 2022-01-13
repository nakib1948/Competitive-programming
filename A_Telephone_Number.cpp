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
        ll i,j,x,y,z,count=0,sum=0,n,m;
         string s;
         cin>>n>>s;
         for(ll i=s.size()-1;i>=0;i--)
         {
             count++;
             if(s[i]=='8')
             {
                 if(count>=11)
                 {
                     sum=1;
                     break;
                 }
             }
         }
         cout<<(sum ? "YES":"NO")<<endl;
    }


    return 0;
}

