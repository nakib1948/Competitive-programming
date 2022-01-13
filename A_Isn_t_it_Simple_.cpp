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
        string s,s1,s2;
        cin>>s>>s1>>s2;
        s+=s1;
        s+=s2;
        ll k=stoi(s);
        if(k%4==0)
        cout<<"YES"<<endl;
        else
        {
            cout<<"NO"<<endl;
        }
        


    return 0;
}

