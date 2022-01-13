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
        string s;
        n=16;
        while(n--)
        {
            char c;
            cin>>c;
            s+=c;
        }
        bool ok=false;
        for(ll i=0;i<=11;i+=4)
        {
            count=0,sum=0;
            if(s[i]=='#')count++; else sum++;
            if(s[i+1]=='#')count++; else sum++;
            if(s[i+4]=='#')count++; else sum++;
            if(s[i+5]== '#')count++; else sum++;
            
            if(count>=3 || sum>=3) ok=true;
        }
        if(!ok)
        {
        for(ll i=2;i<=13;i+=4)
        {
            count=0,sum=0;
            if(s[i]=='#')count++; else sum++;
            if(s[i+1]=='#')count++; else sum++;
            if(s[i+4]=='#')count++; else sum++;
            if(s[i+5]== '#')count++; else sum++;
            
            if(count>=3 || sum>=3) ok=true;
        }
        }
        if(!ok)
        {
             for(ll i=1;i<=10;i+=4)
        {
            count=0,sum=0;
            if(s[i]=='#')count++; else sum++;
            if(s[i+1]=='#')count++; else sum++;
            if(s[i+4]=='#')count++; else sum++;
            if(s[i+5]== '#')count++; else sum++;
            
            if(count>=3 || sum>=3) ok=true;
        }
        }
    
        cout<<(ok ? "YES":"NO")<<endl;

    return 0;
}

