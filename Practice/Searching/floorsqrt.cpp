#include<bits/stdc++.h>
using namespace std;
int floorsqrtnaive(int x)
{
  int i=1;
  while(i*i<=x)
    i++;
  return i-1;
}
int floorsqrteff(int x)
{
  int l=1,h=x,res=-1;
  while(l<=h)
  {
    int mid=l+(h-l)/2;
    int midsq=mid*mid;
    if(midsq==x)
      return mid;
    else if(midsq>x)
      h=mid-1;
    else
    {
      l=mid+1;
      res=mid;
    }
  }
  return res;
}
int main()
{
  int n;
  cin>>n;
  cout<<floorsqrteff(n);
}
