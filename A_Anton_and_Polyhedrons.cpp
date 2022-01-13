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
 
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n;
        while(n--)
        {
            string s;
            cin>>s;
            if(s=="Cube")
            sum+=6;
            else if(s=="Tetrahedron")
            sum+=4;
            else if(s=="Octahedron")
            sum+=8;
            else if(s=="Dodecahedron")
            sum+=12;
            else if(s=="Icosahedron")
            sum+=20;
        }
        cout<<sum<<endl;
    return 0;
}

