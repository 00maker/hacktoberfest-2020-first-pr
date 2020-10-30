#include<stdio.h>
#define n 10

main()
{
	int a[10];
	int i,j,p,m;
	printf("Enter 10 numbers:");
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
		for(j=i;j<n;j++)
			if(a[i]>a[j])
			{
				m=a[i];
				a[i]=a[j];
				a[j]=m;
			}
	p=1;
	for(i=0;i<n-1;i++)
		if(a[i]!=a[i+1]) p++;
	printf("Number of different numbers:%d\n",p);
	for(i=0;i<n;i++) printf("%d, ",a[i]);
}