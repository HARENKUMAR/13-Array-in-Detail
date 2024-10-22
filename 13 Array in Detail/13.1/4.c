#include<stdio.h>

main()
{
	
	int size1,size2;
	
	printf("enter a first array size : ");
	scanf("%d",&size1);
	printf("enter a second array size : ");
	scanf("%d",&size2);
	
	int a[size1], b[size2];
	int marge[size1+size2];
	int i;
	
	printf("\n\n ARRAY INPUT  1 \n\n");
	
	for(i=0; i<size1; i++)
	{
		printf("enter a element a[%d] is: ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n\n ARRAY INPUT  2 \n\n");
	
	for(i=0; i<size2; i++)
	{
		printf("enter a element a[%d] is: ",i);
		scanf("%d",&b[i]);
	}
	
	for(i=0; i<size1; i++)
	{
		marge[i]=a[i];
	}
	
	for(i=0; i<size2; i++)
	{
		marge[i+size1]=b[i];
	}
	
	printf("\n\n ARRAY MARGE \n\n");
	
	for(i=0; i<size1+size2; i++)
	{
		printf("%d \t",marge[i]);
	}
	
	
	
	
}