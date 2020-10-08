#include<bits/stdc++.h>
using namespace std;
int lastoccnaive(int a[],int n,int x)
{
  for(int i=n-1;i>=0;i--)
    if(a[i]==x)
      return i;
  return -1;
}
int lastocceffrec(int a[],int l, int h,int x,int n)
{
  if(l>h)
    return -1;
  int mid=l+(h-l)/2;
  if(a[mid]>x)
    return lastocceffrec(a,l,mid-1,x,n);
  else if(a[mid]<x)
    return lastocceffrec(a,mid+1,h,x,n);
  else
  {
    if(mid==n-1 || a[mid]!=a[mid+1])
      return mid;
    else
      return lastocceffrec(a,mid+1,h,x,n);
  }
}
int lastocceffiter(int a[],int n,int x)
{
  int l=0,h=n-1;
  while(l<=h)
  {
    int mid=l+(h-l)/2;
    if(a[mid]>x)
      h=mid-1;
    else if(a[mid]<x)
      l=mid+1;
    else
    {
      if(mid==n-1 || a[mid]!=a[mid+1])
        return mid;
      else
        l=mid+1;
    }
  }
}
int main()
{
  int n,x;
  cin>>n>>x;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
  cout<<lastocceffiter(a,n,x);
}
