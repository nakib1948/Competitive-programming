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
    int n;
    cin>>n;
    while(n!=0)
    {
        vector<int> A(n);
        int n,j,i,count=0,sum=0;
        stack<int>S;
        rep(i,n)
        {
            cin>>A[i];
        }
        A.pb(0);
        
    int maxArea = 0;
    for (int i = 0; i < A.size(); i++) {
        while (!S.empty() && A[S.top()] >= A[i]) {
            int height = A[S.top()];
            S.pop();
            int left = S.empty() ? 0 : S.top() + 1, right = i - 1;
            maxArea = max(maxArea, (right - left + 1) * height);
        }
        S.push(i);
    }
    cout<<maxArea<<endl;
        cin>>n;
    }


    return 0;
}

