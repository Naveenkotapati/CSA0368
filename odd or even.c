#include<stdio.h>
int main()
{
  int a[10],n,i;
  printf("Enter the no.of elements:");
  scanf("%d",&n);
  printf("Enter the array elements");
  for(i=0;i<n;i++)
  {
  	scanf("%d",&a[i]);
  }
  printf("Even numbers:");
  for(i=0;i<n;i++)
  {
  	if(a[i]%2==0)
  	{
  	printf("%d",a[i]);
    }
  }
  printf("odd numbers:");
  for(i=0;i<n;i++)
  {
  	if(a[i]%2!=0)
  	{
  		printf("%d",a[i]);
	  }
  }
}
