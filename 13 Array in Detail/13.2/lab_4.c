#include<stdio.h>

main()
{
	int row,col; 
	
	printf("Enter a ROW : ");
	scanf("%d",&row);
	printf("Enter a COL : ");
	scanf("%d",&col);
	
	int a[row][col];
	int i,j;
	int sum=0;
	
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("Enter a element a[%d][%d] is : ",i,j);
			scanf("%d",&a[i][j]);
		}
	printf("\n");	
	}
	
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			if(i==0 || j==0 || i==row-1 || j==col-1)
			{
				printf("%d ",a[i][j]);
				sum += sum + a[i][j];
			}
			else
			{
				printf("   ");
			}
		}
		printf("\n");
	}
	
	printf("\n\n SUM OF ELEMENTS \n\n");
	printf("SUM IS : %d ",sum);
}