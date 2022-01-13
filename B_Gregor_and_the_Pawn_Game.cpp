#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define debug cout<<"debug"<<endl;
#define Quicksilver ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main()
{
     ///"Bismillahir Rahmanir Raheem"///

    Quicksilver;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n;
        string s,w;
        cin>>s>>w;
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='0' && w[i]=='1')
            count++;
            else{

            if(i==0 && w[i]=='1')
            {
                if(s[i+1]=='1'){
                count++;
                s[i+1]='3';
                }
            }
            else if(i==n-1 && w[i]=='1')
            {
                if(s[i-1]=='1'){
                count++;
                s[i-1]='3';
                }
            }
            else if(w[i]=='1')
            {
                x=0;
                if(s[i-1]=='1'){
                count++;
                s[i-1]='3';x=1;
                
                }
                if(s[i+1]=='1' && x==0){
                count++;
                s[i+1]='3';
                }
            }
            
          }
        }
        cout<<count<<endl;
    }


    return 0;
}

