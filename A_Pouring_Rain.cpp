#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define debug cout<<"debug"<<endl;
#define pi 3.1415926535897932

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
     
  
        double i,j,d,h,v,e,count,sum,n,m;
       
        cin>>d>>h>>v>>e;

        double area=pi*d*d*h;
        v=(v/10.0)*1.0;
        //cout<<v<<endl;
        //double gilteso=pi*d*d*v;
        double rain=pi*d*d*e*1.0;
        
        if(rain>=v)
        cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            sum=v-rain;
            count= area/sum;
            printf("%.12lf\n",count);
        }
        






    return 0;
}

