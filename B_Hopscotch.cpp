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
    
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n>>x>>y;
 
        if(y%n==0)
        cout<< -1 <<endl;
        else if(y<n)
        {
            if(x==0 && y==0)
            cout<< -1 <<endl;
            else if(x==0)
            cout<<1<<endl;
            else if(abs(x)<double(n*1.0/2))
            cout<<1<<endl;
            else cout<<-1<<endl;
        }
        else
        {
            if(((y/n)-1)&1)
            {
                z=(y/n)-1;

                if(x==0)
                cout<< -1 <<endl;
                else if(abs(x)<n && x<0)
                {
                     cout<< (z/2)+z+2<<endl;
                }
                else if(abs(x)<n && x>0)
                  {
                         cout<< (z/2)+z+3<<endl;
                  }

                else cout<<-1<<endl;
             
            }
            else
            {
                 z=(y/n)-1;
                if(abs(x)<double(n*1.0/2))
                {
                    cout<< (z/2)+((z/2)*2)+2 <<endl;
                }
                else cout<<-1<<endl;
            }
            
        }
        
     
        
        


    return 0;
}

