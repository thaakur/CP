#include<bits/stdc++.h>
using namespace std;
int infnaive(int a[],int x)
{
  int i=0;
  while(true)
  {
    if(a[i]==x)
      return i;
    if(a[i]>x)
      return -1;
    i++;
  }
}
int bsearch(int a[],int l,int h,int x)
{
  while(l<=h)
  {
    int mid=l+(h-l)/2;
    if(a[mid]==x)
      return mid;
    else if(a[mid]>x)
      h=mid-1;
    else
      l=mid+1;
  }
  return -1;
}
int infeff(int a[],int x)
{
  if(a[0]==x)
    return 0;
  int i=1;
  while(a[i]<x)
    i*=2;
  if(a[i]==x)
    return i;
  return bsearch(a,i/2+1,i-1,x);
}
int main()
{
  int n,x;
  cin>>n>>x;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
  cout<<infeff(a,x);
}
