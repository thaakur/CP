#include<bits/stdc++.h>
using namespace std
int max1naive(int a[],int n)
{
  int res=0;
  for(int i=0;i<n;i++)
  {
    int curr=0;
    for(int j=i;j<n;j++)
    {
      if(a[j]==1)
      {
        curr++;
        res=max(res,curr);
      }
      else
        break;
    }
  }
  return res;
}
int max1eff(int a[],int n)
{
  int res=0,curr=0;
  for(int i=0;i<n;i++)
  {
    if(a[i]==0)
      curr=0;
    else
    {
      curr++;
      res=max(curr,res);
    }
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
  cout<<max1eff(a,n);
}
