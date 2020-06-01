#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        int mx;
        if(a>b)
            b=b*2;
        else
            a=a*2;

        mx=max(a,b);

        cout<<(mx*mx)<<endl;
    }
}
