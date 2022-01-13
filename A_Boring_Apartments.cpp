#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define kk ios::sync_with_stdio(false); cin.tie(0);
int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
    kk;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n;
        
        cin>>n;
        string q=to_string(n);
        string w;
        w+=q[0];
        y=stoi(w);
        for(i=1;i<=9;i++)
        {
          if(i==y)
          {
              if((i*1)<=n)
              {
                  count+=1;
              }
              if((i*11)<=n)
              {
                  count+=2;
              }
              if((i*111)<=n)
              {
                  count+=3;
              }
              if((i*1111)<=n)
              {
                  count+=4;
              }
              sum+=(count+((i-1)*10));
          }
           
        }
        
      
        cout<<sum<<endl;
        
        
    }


    return 0;
}

