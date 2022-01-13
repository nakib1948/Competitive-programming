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
ll Pow(ll x,ll y){return y==0?:x*pow(x,y-1);}
ll gcd(ll a, ll b){return (b == 0 ? a : gcd(b, a % b));}
ll lcm(ll a, ll b){return (a * (b / gcd(a, b)));}

int main()
{
     ///"Bismillahir Rahmanir Raheem"///

    heyyoo;
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x2,x1,y2,y1,z,count=0,sum=0,n;
        cin>>n;
        char a[n][n];
     
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++){
            cin>>a[i][j];
            if(a[i][j]=='*' && count==0)
             {
                 x1=i;
                 y1=j;
                 count=1;
             }
             else if(a[i][j]=='*' && count==1)
             {
                 x2=i;
                 y2=j;
             }
            }
        }
      
       if(x1==x2){
    	if(x1+1<n){
    		a[x1+1][y1]='*';
    		a[x1+1][y2]='*';
    	}
    	else if(x1-1>=0){
    		a[x1-1][y1]='*';
    		a[x1-1][y2]='*';		
    	}
    }
    else if(y1==y2){
    	if(y1+1<n){
    		a[x1][y1+1]='*';
    		a[x2][y1+1]='*';
    	}
    	else if(y1-1>=0){
    		a[x1][y1-1]='*';
    		a[x2][y1-1]='*';		
    	}   	
    }else {
    	a[x2][y1]='*';
    	a[x1][y2]='*';
    }
        for(int i=0;i<n;i++){
            
            for(int j=0;j<n;j++){
                cout<<a[i][j];
            }
            cout<<endl;
  }


    }


    return 0;
}

