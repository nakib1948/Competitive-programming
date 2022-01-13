 
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
     
   
        ll i,j,x,y,z,count=0,n,m;
        cin>>n;
        double sum=0.0;
         for(ll i=1;i<=n;i++)
         {
           sum=sum+(1/double(i));
         }
       
         printf("%.12lf",sum);


    return 0;
}

 