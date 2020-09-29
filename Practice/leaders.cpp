#include<bits/stdc++.h>
using namespace std;
void leadersnaive(int a[],int n)
{
  for(int i=0;i<n;i++)
  {
    bool flag=false;
    for{int j=i+1;j<n;j++)
    {
      if(a[i]<=a[j])
      {
        flag=true;
        break;
      }
    }
    if(flag==false)
      cout<<a[i]<<" ";
  }
}
void leaderseff(int a[],int n)
{
  int curr=a[n-1];
  cout<<curr<<" ";
  for(int i=n-2;i>=0;i--)
  {
    if(a[i]>curr)
    {
      curr=a[i];
      cout<<curr<<" ";
    }
  }
}
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
  leaderseff(a,n);
}
