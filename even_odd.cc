#include"stdio.h"
#include"stdlib.h"
#include<iostream>

using namespace std;

int f(int a[ ], int len)
{
  int max,sec_max;
  max=sec_max=-1;
  if (len <=1)
  {
    return -1;
  }
  for (int i=0;i<len;i++)
  {
    if (a[i]>max)
    {
      sec_max=max;
      max=a[i];
    }
    else if( a[i] < max && a[i] > sec_max)
    {
      sec_max=a[i];
    }
  }
  if (max != sec_max)
  { 
    return sec_max;
  }

}

int main() 
{
  int a[] = {4, 2, 5};//4
  cout<<f(a,sizeof(a)/sizeof(int))<<endl;

  int b[]={1, 2, 3, 4};//3
  cout<<f(b,sizeof(b)/sizeof(int))<<endl;

  int c[]={4, 1, 2, 3};//3
  cout<<f(c,sizeof(c)/sizeof(int))<<endl;

  int d[]={1, 1, 2, 2};//1
  cout<<f(d,sizeof(d)/sizeof(int))<<endl;

  int e[]={1, 1};//-1
  cout<<f(e,sizeof(e)/sizeof(int))<<endl;

  int h[]={1};//-1
  cout<<f(h,sizeof(h)/sizeof(int))<<endl;

  int g[]={};//-1
  cout<<f(g,sizeof(g)/sizeof(int))<<endl;

  return 0;
}
