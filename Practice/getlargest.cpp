#include<bits/stdc++.h>
using namespace std;
int getlargestnaive(int a[],int n)
{
  for(int i=0;i<n;i++)
  {
    bool flag=true;
    for(int j=0;j<n;j++)
    {
      if(a[j]>a[i])
      {
        flag=false;
        break;
      }
      if(flag==true)
        return i;
    }
    return -1;
  }
}
int getlargestefficient(int a[],int n)
{
  int res=0;
  for(int i=0;i<n;i++)
  {
    if(a[i]>a[res])
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
  cout<<getlargestnaive(a,n);
  cout<<endl;
  cout<<getlargestefficient(a,n);
  cout<<endl;
}
