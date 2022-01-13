#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define debug cout<<"debug"<<endl;

int main()
{
     ///"Bismillahir Rahmanir Raheem"///

        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n;
        if(n<10)
        cout<<0<<endl;
        else{
        string s=to_string(n);
        x=s.size()/2;
        string w="";
        for(ll i=0;i<x;i++)
        {
            w+='9';
        }
        z=stol(w);
       
        for(ll i=z;i>0;i--)
        {
            string q=to_string(i);
            q+=q;
            ll k= stol(q);
            if(k<=n)
            count++;
        }
        cout<<count<<endl;
        }
    return 0;
}

