#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define debug cout<<"debug"<<endl;
#define Quicksilver ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main()
{
     ///"Bismillahir Rahmanir Raheem"///

    string s;
    cin>>s;
    ll one=0,zero=0,two=0,track=0,you=0;
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        one++;
        else if(s[i]=='0')
        zero++;
        else
       {
           if(you==0)
           {
               track=i;
               you=1;
           }
          two++;


       }
    }
    if(!one)
    cout<<s<<endl;
    else if(!zero)
    {
        sort(s.begin(),s.end());
        cout<<s<<endl;
    }
    else if(!two)
    {
        sort(s.begin(),s.end());
        cout<<s<<endl;
    }
    else
    {
        for(ll i=0;i<track;i++)
        {
            if(s[i]!='1')
            cout<<s[i];
        }
        for(ll i=0;i<one;i++)
        cout<<'1';
        for(ll i=track;i<s.size();i++)
        {
            if(s[i]!='1')
            cout<<s[i];
        }
        cout<<endl;
    }
    


    return 0;
}

