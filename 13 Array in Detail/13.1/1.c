#include<stdio.h>

main()
{
	int size;
	
	printf("enter a number of elememts :- ");
	scanf("%d",&size);

	int a[size];
	
	int i; 
	
	printf("\n\n Array Input \n\n");
	
	for(i=0; i<size; i++)
	{
	
	for(i=0; i<size; i++)
	{
		printf("enter a elemnets of  %d is:- ",i+1);
		scanf("%d",&a[i]);
	}

	printf("size of elements is :-  %d",size);
	}
}