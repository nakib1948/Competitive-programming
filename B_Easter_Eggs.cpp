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
    
        ll i,j,x,y,z,count=0,sum=0,n;
        cin>>n;
        x=n/7;
        y=n%7;
        string s="ROYGBIV",s1="ROYGBI",s2="ROYGB",s3="ROYG",s4="GBI",s5="GB",s6="G";
        for(i=1;i<=x;i++)
        {
            cout<<s;
        }
        if(y==6)
        cout<<s1;
        else if(y==5)
        cout<<s2;
        else if(y==4)
        cout<<s3;
        else if(y==3)
        cout<<s4;
        else if(y==2)
        cout<<s5;
        else if(y==1)
        cout<<s6;


    return 0;
}

