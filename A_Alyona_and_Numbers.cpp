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
     
  
        ll i,j,x,y,z,one=0,one1=0,two=0,two1=0,three=0,three1=0,four=0,four1=0,five=0,five1=0;
        cin>>x>>y;

        if(x%5 == 0)
        {
            five=x/5;
            one=five;
            two=five;
            three=five;
            four=five;
        }
        else
        {
            five=x/5;
            one=five;
            two=five;
            three=five;
            four=five;
            if(x%5==1)
            one++;
            else if(x%5==2)
            {
                one++, two++;
            }
            else if(x%5==3)
            {
                one++,two++,three++;
            }
            else if(x%5==4)
            {
                one++,two++,three++,four++;
            }
        }

         if(y%5 == 0)
        {
            five1=y/5;
            one1=five1;
            two1=five1;
            three1=five1;
            four1=five1;
        }
        else
        {
            five1=y/5;
            one1=five1;
            two1=five1;
            three1=five1;
            four1=five1;
            if(y%5==1)
            one1++;
            else if(y%5==2)
            {
                one1++, two1++;
            }
            else if(y%5==3)
            {
                one1++,two1++,three1++;
            }
            else if(y%5==4)
            {
                one1++,two1++,three1++,four1++;
            }
        }

        cout<<((one*four1)+(two*three1)+(three*two1)+(four*one1)+(five*five1))<<endl;

        
        

    return 0;
}

