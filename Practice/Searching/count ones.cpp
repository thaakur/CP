#include<bits/stdc++.h>
using namespace std;
int cntones(int a[],int n)
{
  int l=0,h=n-1;
  while(l<=h)
  {
    int mid=l+(h-l)/2;
    if(a[mid]==0)
      l=mid+1;
    else
    {
      if(mid==0 || a[mid]!=a[mid+1])
        return n-mid;
      else
        h=mid-1;
    }
  }
  return 0;
}
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
  cout<<cntones(a,n);
}
