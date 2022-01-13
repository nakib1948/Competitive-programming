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
     ///"In the name of Allah,most gracious and most merciful"///

        ll i,j,x,y,z,count=0,sum=0;
        double n;
        cin>>n;
        double low=1.0,high=1e11;
        while(fabs(low-high)>=0.00000001)
        {
            double mid=(low+high)/2;
            if(((mid*mid)+sqrt(mid))<=n)
            low=mid;
            else 
            high=mid;
        }
        printf("%0.15lf\n",low);

    return 0;
}


