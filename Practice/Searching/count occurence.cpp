#include<bits/stdc++.h>
using namespace std;
int naive(int a[],int n,int x)
{
  int cnt=0;
  for(int i=0;i<n;i++)
    if(a[i]==x)
      cnt++;
  return cnt;
}
int firstocciter(int a[],int n,int x)
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
int lastocciter(int a[],int n,int x)
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
  return -1;
}
int eff(int a[],int n,int x)
{
  int first=firstocciter(a,n,x);
  if(first==-1)
    return 0;
  int last=lastocciter(a,n,x);
  return last-first+1;
}
int main()
{
  int n,x;
  cin>>n>>x;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
  cout<<eff(a,n,x);
}
