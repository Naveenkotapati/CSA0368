#include<stdio.h>
int main()
{
	int n,i,a[10],pos,key,option;
	printf("Enter the n value:");
	scanf("%d",&n);
	printf("Enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
    printf("%d ",a[i]);
	printf("Enter the pos and key element");
	scanf("%d\n%d",&pos,&key);
	printf("Enter the option");
	printf("1.Insert\n 2.delete\n");
	scanf("%d",&option);
	switch(option)
	{
		case 1:
			for(i=n;i>=pos;i--)
			a[i]=a[i-1];
			a[pos-1]=key;
			for(i=0;i<=n;i++)
			printf("%d",a[i]);
			break;
		case 2:
			for(i=pos-1;i<n;i++)
			a[i]=a[i+1];
			for(i=0;i<n-1;i++)
			printf("%d\t",a[i]);
			break;
				
	}  
	
}
