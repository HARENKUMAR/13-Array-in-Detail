#include<stdio.h>

int main()
{
	int size;
	
	printf("enter array size : ");
	scanf("%d",&size);
	
	int a[size], b[size];
	int  sum[size];
	int i;
	
	printf("\n\n ARRAY INPPUT\n\n");
	
	for(i=0; i<size; i++)
	{
		printf("enter a element a[%d] is:",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n\n\n");
	
	for(i=0; i<size; i++)
	{
		printf("enter a element b[%d] is :",i);
		scanf("%d",&b[i]);
	}
	
	printf("\n\n ARRAY SUM :\n\n");
	for(i=0; i<size; i++)
	{
		sum[i]=a[i]+b[i];
		printf("%d \t",sum[i]);
		
		
	}
}