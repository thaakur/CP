#include<bits/stdc++.h>
using namespace std;
int maxsubsumnaive(int a[],int n)
{
  int res=a[0];
  for(int i=0;i<n;i++)
  {
    int curr=0;
    for(int j=i;j<n;j++)
    {
      curr+=a[j];
      res=max(res,curr);
    }
  }
  return res;
}
int maxsubsumeff(int a[],int n)
{
  int res=a[0];
  int maxending=a[0];
  for(int i=1;i<n;i++)
  {
    maxending=max(maxending+a[i],a[i]);
    res=max(res,maxending);
  }
  return res;
}
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
  cout<<maxsubsumeff(a,n);
}
