#include<bits/stdc++.h>
using namespace std;
int maxdiffnaive(int a[],int n)
{
  int maxdif=a[1]-a[0];
  for(int i=0;i<n-1;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      maxdif=max(maxdif,a[j]-a[i]);
    }
  }
  return maxdif;
}
int maxdiffeff(inta[],int n)
{
  int maxdif=a[1]-a[0],minval=a[0];
  for(int i=1;i<n;i++)
  {
    maxdif=max(maxdiff,a[i]-minval);
    minval=min(minval,a[i]);
  }
}
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  cout<<maxdiffeff(a,n);
}
