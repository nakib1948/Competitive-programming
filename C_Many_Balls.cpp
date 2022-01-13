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
   
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n;
        string w="";
        while (n!=0)
        {
            if(n&1){
            w+='A';
            n--;
            }
            else
            {
                w+='B';
                n/=2;
            }
        }
        reverse(w.begin(),w.end());
        cout<<w<<endl;
        
     


    return 0;
}

