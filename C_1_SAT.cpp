#include<bits/stdc++.h>
using namespace std; 

#define ll long long

int main()
{
     ///"In the name of Allah,most gracious and most merciful"///
  
        ll i,j,x,y,z,count=0,sum=0,n,m;
        cin>>n;
        set<string>s,s1,s2;
        map<string,ll>mp,mp1;
        bool ok=true;
        string q;
        while(n--)
        {
            string w;
            cin>>w;
            if(w[0]=='!')
            {
                w.erase(0,1);
                if(mp1[w]==1)
                {
                    ok=false;
                    q=w;
                }
                else
                {
                    mp[w]=1;
                }
            }
            else 
            {
                if(mp[w]==1)
                {
                    ok=false;
                    q=w;
                }
                else
                {
                    mp1[w]=1;
                }
                
            }
        }
        if(ok)
        cout<<"satisfiable"<<endl;
        else
        {
            cout<<q<<endl;
        }
        



    return 0;
}

