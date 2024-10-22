#include<stdio.h>

main()

{
	
	int row,col;
	
	printf(" Enter a ROW : ");
	scanf("%d",&row);
	printf(" Enter a COL : ");
	scanf("%d",&col);
	
	int a[row][col], b[row][col];
	int sum[row][col];
	int i,j;
	
	printf("\n\n ARRAY INPUT 01 \n\n");
	
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("Enter a element a[%d][%d] is : ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n\n");
	}
	
	printf("\n\n ARRAY INPUT 02 \n\n");
	
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("Enter a element b[%d][%d] is : ", i,j);
			scanf("%d",&b[i][j]);
		}
		printf("\n\n");
	}
	
	printf("\n\n SUM OF ARRAY \n\n");
	
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			sum[i][j]=a[i][j] + b[i][j];
		}
	}
	
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%d ",sum[i][j]);
		}
		
		printf("\n");
	}
		
			
	
	
}