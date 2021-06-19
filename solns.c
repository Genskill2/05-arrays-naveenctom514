/* Enter your solutions in this file */
#include <stdio.h>

int max(int a[],int n)
 {
 int max=0;
 for(int i=0;i<n;i++)
  {
  if(a[i]>max)
  	max=a[i];
  }
  return max;
 }
int min(int a[],int n)
{
int min=a[0];
for(int i=0;i<n;i++)
{
if(a[i]<min)
	min=a[i];
}
return min;
}
float average(int a[],int n)
{
float sum=0;
for(int i=0;i<n;i++)
 {
 sum=sum+a[i];
 }
return sum/n;
}
int mode(int a[],int n)
{
int maxcount=0;
int maxvalue=0;
for(int i=0;i<n;i++)
 {
 int count=0;
 for(int j=0;j<n;j++)
  {
  if(a[j]==a[i])
  count++;
  }
 if(count>maxcount)
  {
  maxcount=count;
  maxvalue=a[i];
  } 
 }
return maxvalue; 
}
int factors(int n,int a[])
{
int count=0;
for(int i=0;i<100;i++)
	{
	if(n>0)
	{
	for(int j=2;j<100;j++)
	{
	if(n%j==0)
		{
		a[i]=j;
		count++;
		n=n/j;
		break;
		}
	}
	}
	}
return count;
}
