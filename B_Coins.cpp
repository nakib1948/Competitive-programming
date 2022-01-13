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
  
        ll i,j,a=0,b=0,c=0,a1=0,b1=0,c1=0,count=0,sum=0,n;
        string s,q,w;
        cin>>s>>q>>w;
        if(s[0]=='A'&&s[1]=='>')
        a++;
        else if(s[0]=='B'&&s[1]=='>')
        b++;
        else if(s[0]=='C'&&s[1]=='>')
        c++;

        if(s[2]=='A'&&s[1]=='<')
        a++;
        else if(s[2]=='B'&&s[1]=='<')
        b++;
        else if(s[2]=='C'&&s[1]=='<')
        c++;
        
        if(w[0]=='A'&&w[1]=='>')
        a++;
        else if(w[0]=='B'&&w[1]=='>')
        b++;
        else if(w[0]=='C'&&w[1]=='>')
        c++;

        if(w[2]=='A'&&w[1]=='<')
        a++;
        else if(w[2]=='B'&&w[1]=='<')
        b++;
        else if(w[2]=='C'&&w[1]=='<')
        c++;

         if(q[0]=='A'&&q[1]=='>')
        a++;
        else if(q[0]=='B'&&q[1]=='>')
        b++;
        else if(q[0]=='C'&&q[1]=='>')
        c++;

        if(q[2]=='A'&&q[1]=='<')
        a++;
        else if(q[2]=='B'&&q[1]=='<')
        b++;
        else if(q[2]=='C'&&q[1]=='<')
        c++;
        
        bool ok=true;
        ll x[3]={a,b,c};
        sort(x,x+3);
        if(x[0]==0 && x[1]==1 && x[2]==2)
        ok=true;
        else{ok=false;cout<<"Impossible";return 0;}
    
        if(a==0)
        cout<<"A";
        else if(b==0)
        cout<<"B";
        else
        cout<<"C";

        if(a==1)
        cout<<"A";
        else if(b==1)
        cout<<"B";
        else
        cout<<"C";

        if(a==2)
        cout<<"A";
        else if(b==2)
        cout<<"B";
        else 
        cout<<"C";

        cout<<endl; 

    return 0;
}

