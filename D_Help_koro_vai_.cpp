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
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
   
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n>>m;
        x=n,y=m;
        char a[n+m];
        if(n>m)
        {
           
            for(ll i=1;i<(n+m);i+=2)
            {
                y--;
                a[i]='G';
                if(y==0)
                break;
            }
             for(ll i=0;i<(n+m);i++)
            {
                if(a[i]!='G')
                  a[i]='B';
            }
            for(ll i=0;i<(n+m);i++)
            {
                cout<<a[i];
            }
            cout<<endl;
        }
        else if(m>n){
           
            for(ll i=1;i<(n+m);i+=2)
            {
                x--;
                a[i]='B';
                if(x==0)
                break;
            }
             for(ll i=0;i<(n+m);i++)
            {
                if(a[i]!='B')
                  a[i]='G';
            }
            for(ll i=0;i<(n+m);i++)
            {
                cout<<a[i];
            }
            cout<<endl;
        }
        else 
        {
            for(ll i=0;i<(n+m);i+=2)
            {
                a[i]='B';
            }
             for(ll i=1;i<(n+m);i+=2)
            {
                a[i]='G';
            }
             for(ll i=0;i<(n+m);i++)
            {
                cout<<a[i];
            }
            cout<<endl;
        }


    return 0;
}

