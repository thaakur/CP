#include<bits/stdc++.h>
using namespace std;
int getlargeeff(int a[],int n)
{
  int res=0;
  for(int i=0;i<n;i++)
  {
    if(a[i]>a[res])
      res=i;
  }
  return res;
}
int getsecondlargenaive(int a[],int n)
{
  int seclar=getlargeeff(a,n);
  int res=-1;
  for(int i=0;i<n;i++)
  {
    if(res==-1)
      res=i;
    else if(a[i]>a[res])
      res=i;
  }
  return res;
}
int getseclareff(int a[],int n)
{
  int res=-1,seclar=0;
  for(int i=0;i<n;i++)
  {
    if(a[i]>a[seclar])
    {
      res=seclar;
      seclar=i;
    }
    else if(a[i]!=a[seclar]) 
      if(res==-1 ||a[i]>a[res])
        res=i;
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
  
