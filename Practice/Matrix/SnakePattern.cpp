#include<bits/stdc++.h>
using namespace std;
void snakepat(int **a,int m,int n)
{
  for(int i=0;i<m;i++)
  {
    if(i%2==0)
    {
      for(int j=0;j<n;j++)
        cout<<a[i][j]<<" ";
    }
    else
    {
      for(int j=n-1;j>=0;j--)
        cout<<a[i][j]<<" ";
    }
  }
}
int main()
{
  int **a;
  int m,n;
  cin>>m>>n;
  a=new int*[m];
  for(int i=0;i<m;i++){
    a[i]=new int[n];
    for(int j=0;j<n;j++)
      cin>>a[i][j];
  }
  snakepat(a,n);
}
