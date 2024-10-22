#include<stdio.h>

main() 

{
	
    int row,col;      

	printf("Enter a ROW: ");
    scanf("%d", &row);
    printf("Enter a COL: ");
    scanf("%d", &col);

    int a[row][col];
	int i,j;
	int sum=0;  

   for (i=0; i<row; i++) 
   {
        for (j=0; j<col; j++)
		{
            printf("Enter an element a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
            sum =sum + a[i][j];            
        }
        printf("\n\n");
    }
    
    	printf("\n\n SUM OF ELEMENTS \n\n");
		printf("sum of element is  : %d",sum);
		
		printf("\n\n AVG IS \n\n");
	
		printf("the AVG is : %.2f ",(float)sum / (row * col));
}
