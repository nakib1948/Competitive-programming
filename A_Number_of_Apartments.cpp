#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
     
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,x,y,z,count=0,sum=0,n;
        cin>>n;
        
        if(n%5==0)
        {
            cout<<"0"<<" "<<n/5<<" "<<"0"<<endl;
        }
        else if(n%7==0)
        {
            cout<<"0"<<" "<<"0"<<" "<<n/7<<endl;
        }
        else if(n%3==0)
        {
            cout<<n/3<<" "<<"0"<<" "<<"0"<<endl;
        }

        else
        {
            while(n%5!=0)
            {
                sum++;
                n-=3;
            }
            if(n<0)
            cout<<"-1"<<endl;
            else
            {
                cout<<sum<<" "<<n/5<<" "<<"0"<<endl;
            }
            
        }
    }


    return 0;
}

