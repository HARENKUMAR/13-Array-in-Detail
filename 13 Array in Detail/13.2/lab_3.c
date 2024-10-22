#include<stdio.h>

int main()
{
	int row,col;
	
	printf("Enter a ROW = ");
	scanf("%d",&row);
	printf("Enter a COL = ");
	scanf("%d",&col);
	
	int a[row][col];
	int i,j;
	int sum=0;
	
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("enter a element a[%d][%d] is : ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n Diagonal elements are: \n\n");
	
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			if(i==j)
			{
			   printf("%d ",a[i][j]);
			   sum += a[i][j]; 
			  
			}
		}
	}
	
	printf("\n\n SUM OF DIAGONAL ELEMENT IS = %d",sum);
	
}