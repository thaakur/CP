int srch(int a[],int n,int x)
{
  int l=0,h=n-1;
  while(l<=h)
  {
    int mid=l+(h-l)/2;
    if(a[mid]==x)
      return mid;
    if(a[l]<a[mid])
    {
      if(x>=a[l] && x<a[mid])
        h=mid-1;
      else
        l=mid+1;
    }
    else
    {
      if(x>a[mid] && x<=a[h])
        l=mid+1;
      else
        h=mid-1;
    }
  }
  return -1;
}
