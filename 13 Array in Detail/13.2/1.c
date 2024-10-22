#include<stdio.h>

main()
{
	
	int size;
	
	printf("enter a array size : ");
	scanf("%d",&size);
	
	int a[size];
	int i;
	
	printf("\n\n ARRAY INPPUT\n\n");
	
	for(i=0; i<size; i++)
	{
		
		if(a[i]==0)
		{
			for(i=0; i<size; i++)
			{
				printf("enetr a elements a[%d] is : ",i);
				scanf("%d",a[i]);
			}
		}
	}
}