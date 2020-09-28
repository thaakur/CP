#include<bits/stdc++.h>
using namespace std;
void remdupnaive(int a[],int n)
{
  int temp[n];
  temp[0]=a[0];
  int res=1;
  for(int i=1;i<n;i++)
  {
    if(a[i]!=temp[res-1])
    {
      temp[i]=a[i];
      res++;
    }
  }
  for(int i=0;i<res;i++)
    cout<<temp[i]<<" ";
}
void remdupeff(int a[],int n)
{
  int res=1;
  for(int i=1;i<n;i++)
  {
    if(a[i]!=a[res-1])
    {
      a[res]=a[i];
      res++;
    }
  }
  for(int i=0;i<res;i++)
    cout<<a[i]<<" ";
}
int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
    cin>>a[i];
   remdupeff(a,n);
}
