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

int main()
{
     ///"Bismillahir Rahmanir Raheem"///

        heyyoo;
   
        ll j,x,y,z,count=0,sum=0,n,m,k,k1;
        cin>>n>>m>>x>>y>>k>>k1;
       
        count=k1/m;
        if(k1%m!=0){

        ll cheat=k1%m;
        
        for(ll i=1;i<=m;i++)
        {
            if(cheat>0){
            cout<< count+1 <<" ";
            cheat--;
            }
        else cout<< count <<" ";
        }

        }
        else
        {
          
            for(ll i=1;i<=m;i++)
                cout<< count <<" ";
        }
        k-=k1;
        ll baki=n-m;
        if(baki>0){
        ll p1=k/baki;
        if(k%baki!=0){
          
        ll cheater=k%baki;
       
         for(ll i=1;i<=baki;i++)
         {
            if(cheater>0)
            {
            cout<< p1+1 <<" ";
            cheater--;
            } 
            else cout<< p1 <<" ";

        }

        }
        else
        {
             for(ll i=1;i<=baki;i++)
             cout<< p1 <<" ";
        }

        }
        
        cout<<endl;

    return 0;
}

