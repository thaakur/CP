#include<bits/stdc++.h>
using namespace std;
int firstoccnaive(int a[],int n,int x)
{
  for(int i=0;i<n;i++)
  {
    if(a[i]==x)
      return i;
  }
  return -1;
}
int firstocceffrec(int a[],int l,int h,int x)               //recursive
{
  if(l>h)
    return -1;
  int mid=l+(h-l)/2;
  if(a[mid]>x)
    return firstocceffrec(a,l,mid+1,x);
  else if(a[mid]<x)
    return firstocceffrec(a,mid+1,h,x);
  else
  {
    if(a[mid]!=a[mid-1] || mid==0)
      return mid;
    else
      return firstocceffrec(a,l,mid-1,x);
  }
}
int firstocceffiter(int a[],int n,int x)
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
      if(mid==0 || a[mid]!=a[mid-1])
        return mid;
      else
        h=mid-1;
    }
  }
  return -1;
}
int main()
{
  int n,x;
  cin>>n>>x;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
  cout<<firstoccnaive(a,n,x);     //returns index
}
