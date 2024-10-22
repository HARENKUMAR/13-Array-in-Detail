#include<stdio.h>

main()
{
	
	int size;
	
	printf("enter a number of elements :-");
	scanf("%d",&size);
	
	int a[size];
	int i;
	
	printf("\n\n ARRAY INPUT \n\n");
	
	for(i=0; i<size; i++)
	{
			printf("enter a elemnets of  %d is:- ",i+1);
		    scanf("%d",&a[i]);
	}
		
	printf("\n\n ARRAY OUTPUT \n\n");
	
   int sum=0;
	
	for(i=0;i<size;i++)
	
	{	
		  printf("%d \t",a[i]);
		  sum+=a[i];
	}
 	 
 	 
 	  	 printf("\n\n");
	  	printf("SUM of all elments is :- ");
	  	printf("%d",sum);
	
	
	    float avg;
	
	    avg=(float)sum / size;
	     printf("\n\n");
	    printf("the avg is %.2f",avg);
}