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
    
        ll i,j,x,y,z,count=0,sum=0,n;
        cin>>n;
        string s;
        cin>>s;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='A')
            count++;
            else
            {
                sum++;
            }
        }
        if(sum==count)
        cout<<"Friendship"<<endl;
        else if(count>sum)
        cout<<"Anton"<<endl;
        else cout<<"Danik"<<endl;


    return 0;
}

