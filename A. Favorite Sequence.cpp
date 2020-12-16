#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t,x;
  cin>>t;
  while(t--)
  {
    cin>>x;
    int arr[x],arr2[x];
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<x/2;i++)
    {
        cout<<arr[i]<<' '<<arr[x-i-1]<<' ';
    }
    if(x%2!=0)
        cout<<arr[x/2];

    cout<<endl;

  }


  return 0;
}
