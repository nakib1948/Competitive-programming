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
        ll i,j,z,count=0,n,m;
        cin>>n;
        ll a[n];
        rep(i,n)
        {
            cin>>a[i];
        }
        double sum=1000000000.0;
        sort(a,a+n);
   
        for(ll j=0;j<n;j++){
             double k=a[j],x=a[j+1];
        for(ll  i=j+2;i<n-1;i++)
        {
             double y=a[i];
             if((k+x)>y)
             {
            double s=(x+y+k)/2.0;
            if(s-x>0 && s-y>0 && s-k>0){
            double area=sqrt(s*(s-x)*(s-y)*(s-k));
            sum=min(sum,area);
            }
            }
        }

        }
        if(sum==1000000000.0)
        cout<< -1 <<endl;
        else 
        printf("%.10lf\n",sum);
    }


    return 0;
}

