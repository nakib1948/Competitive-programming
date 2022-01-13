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

   
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=1,sum=0,n;
        cin>>n;
  
    vector<string>v;

    for(ll i=2;i<=16;i++){
        if(i==10)
        {
            string k=to_string(n);
            v.pb(k);
        }
        else{
        sum=n;
        string w;
        char s;
    while (sum!= 0){
       ll digit = sum % i;

        if (digit < 10)
            s = '0' + digit;
        else
            s = digit - 10 + 'A';

        w =s+w;

        sum /= i;                
    }
      v.pb(w);

        }

    }
      vector<ll>v1;
      for(auto it:v)
      {
         string w=it;
         count++;
        reverse(w.begin(),w.end());
        if(w==it)
         v1.pb(count);
      } 
      if(v1.size()==0)
      cout<< -1 <<endl;
      else 
      {
          for(auto it:v1){
          cout<< it <<" ";
          }
          cout<<endl;
      }
    

    }


    return 0;
}

