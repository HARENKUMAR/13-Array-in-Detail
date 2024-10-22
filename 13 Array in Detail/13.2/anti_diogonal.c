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
		for(i=0; i<row; i++)
		{
			if(i+j == row-1)
			{
				printf("%d ",a[i][j]);
			}	
		}
	}
	
	printf("\n");
}