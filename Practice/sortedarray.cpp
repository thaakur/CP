#include<bits/stdc++.h>
using namespace std;
bool sortednaive(int a[],int n)
{
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(a[j]<a[i])
        return false;
    }
  }
  return true;
}
bool sortedeff(int a[],int n)
{
  for(int i=1;i<n;i++)
    if(a[i]<a[i-1])
      return false;
  return true;
}
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
  cout<<sortedeff(a,n);
}
